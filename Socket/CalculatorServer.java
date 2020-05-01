/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author GabrielFerreira
 */

import java.io.*;
import java.net.*;

public class CalculatorServer{

    // Declaration section:
    // declare a server socket and a client socket for the server
    // declare an input and an output stream
    
    static  Socket clientSocket = null;
    static  ServerSocket serverSocket = null;

    // This chat server can accept up to 10 clients' connections

    static  clientThread t[] = new clientThread[10];           
    
    public static void main(String args[]) {
	
	// The default port

	int port_number=2222;
	
	if (args.length < 1)
	    {
		System.out.println("Usage: java CalculatorServer \n"+
				   "Usando a porta de numero="+port_number);
	    } else {
		port_number=Integer.valueOf(args[0]).intValue();
	    }
	
	// Initialization section:
	// Try to open a server socket on port port_number (default 2222)
	// Note that we can't choose a port less than 1023 if we are not
	// privileged users (root)

        try {
	    serverSocket = new ServerSocket(port_number);
        }
        catch (IOException e)
	    {System.out.println(e);}
	
	// Create a socket object from the ServerSocket to listen and accept 
	// connections.
	// Open input and output streams for this socket will be created in 
	// client's thread since every client is served by the server in
	// an individual thread
	
	while(true){
	    try {
		clientSocket = serverSocket.accept();
		for(int i=0; i<=9; i++){
		    if(t[i]==null)
			{
			    (t[i] = new clientThread(clientSocket,t)).start();
			    break;
			}
		}
	    }
	    catch (IOException e) {
		System.out.println(e);}
	}
    }
} 

// This client thread opens the input and the output streams for a particular client,
// ask the client's name, informs all the clients currently connected to the 
// server about the fact that a new client has joined the chat room, 
// and as long as it receive data, echos that data back to all other clients.
// When the client leaves the chat room this thread informs also all the
// clients about that and terminates. 

class clientThread extends Thread{
    
    DataInputStream is = null;
    PrintStream os = null;
    Socket clientSocket = null;       
    clientThread t[];  
    Double numberOne = -1.0;
    Double numberTwo = -1.0;
    String operation = "Vazia";
    
    public clientThread(Socket clientSocket, clientThread[] t){
	this.clientSocket=clientSocket;
        this.t=t;
    }
    
    public void run() 
    {
	String line;
        String name;
	try{
	    is = new DataInputStream(clientSocket.getInputStream());
	    os = new PrintStream(clientSocket.getOutputStream());
	    os.println("Digite seu nome.");
	    name = is.readLine();
	    os.println("Bem vindo "+name+" a nossa calculadora!.\nDigite o primeiro numero do Calculo! "
                    + "Para sair, digite /quit em uma nova linha"); 
	    for(int i=0; i<=9; i++)
		if (t[i]!=null && t[i]!=this)  
		    t[i].os.println("*** Novo usuario "+name+" se conectou ao Servidor de Calculadora!! \nPorem, mesmo assim, voce pode digitar o seu numero para o calculo !!! ***" );
	    while (true) { //aqui que ele le as mensagens, ou seja, o input
		line = is.readLine();
                if(line.startsWith("/quit")) break; 
                
                
                if(operation.equals("Vazia") && numberOne<0){
                    numberOne = Double.parseDouble(line);
                    for(int i=0; i<=9; i++) //escreve a mensagem na tela
		    if (t[i]!=null)  t[i].os.println("O numero digitado pelo usuario <"+name+"> foi "+line+""
                            + "\n Digite o simbolo da operacao desejada"); 
                } else if(operation.equals("Vazia") && numberOne>=0){
                    operation = line;
                    for(int i=0; i<=9; i++) //escreve a mensagem na tela
		    if (t[i]!=null)  t[i].os.println("A operacao escolhida pelo usuario <"+name+"> foi "+line+""
                            + "\n Digite o segundo numero"); 
                } else if(!operation.equals("Vazia")){
                    numberTwo = Double.parseDouble(line);
                    for(int i=0; i<=9; i++) //escreve a mensagem na tela
		    if (t[i]!=null)  t[i].os.println("O segundo numero digitado pelo usuario <"+name+"> foi "+line+""
                            + "\n Vamos obter o resultado:"); 
                }
                
		//for(int i=0; i<=9; i++) //escreve a mensagem na tela
		//    if (t[i]!=null)  t[i].os.println("<"+name+"> "+line); 
                
                
                if(numberTwo>=0){
                    Double result = calculate();
                    for(int i=0; i<=9; i++) //escreve a mensagem na tela
		    if (t[i]!=null)  t[i].os.println("O Calculo feito por <"+name+"> resulta em "+result); 
                    
                    numberOne = -1.0;
                    numberTwo = -1.0;
                    operation = "Vazia";
                }
	    }
	    for(int i=0; i<=9; i++)
		if (t[i]!=null && t[i]!=this)  
		    t[i].os.println("*** The user "+name+" is leaving the chat room !!! ***" );
	    
	    os.println("*** Bye "+name+" ***"); 

	    // Clean up:
	    // Set to null the current thread variable such that other client could
	    // be accepted by the server

	    for(int i=0; i<=9; i++)
		if (t[i]==this) t[i]=null;  
		
	    // close the output stream
	    // close the input stream
	    // close the socket
	    
	    is.close();
	    os.close();
	    clientSocket.close();
	}
	catch(IOException e){};
    }
    
    public Double calculate(){
        if(operation.equals("+")){
            return numberOne + numberTwo;
        } else if(operation.equals("-")){
            return numberOne - numberTwo;
        } else if(operation.equals("*") || operation.toUpperCase().equals("X")){
            return numberOne * numberTwo;
        } else if(operation.equals("/")){
            return numberOne / numberTwo;
        }
        
        return 0.0;
    }
}
