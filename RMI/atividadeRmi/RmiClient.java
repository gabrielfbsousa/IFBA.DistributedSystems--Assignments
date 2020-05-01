/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package atividadeRmi;

import java.rmi.*;
import java.rmi.registry.*;
import java.net.*;
import java.util.Scanner;
/**
 *
 * @author gabriel
 */
public class RmiClient {
    static public void main(String args[])
    {
       ReceiveCalculationInterface rmiServer;
       Registry registry;
       String serverAddress=args[0];
       String serverPort=args[1];
       
       System.out.println("Digite o número da operação que deseja realizar:\n");
       
       System.out.println("1. Soma\n2. Subtração \n3. Multiplicação \n4. Divisão");
       Scanner scanner = new Scanner(System.in); 
       int operation = scanner.nextInt();
       
       System.out.println("Digite o primeiro numero inteiro\n");
       scanner = new Scanner(System.in); 
       int numberOne = scanner.nextInt();
       
       System.out.println("Digite o segundo numero inteiro\n");
       scanner = new Scanner(System.in); 
       int numberTwo = scanner.nextInt();
       
	System.out.println("Enviando conta para o servidor "+ serverAddress+ " na porta "+ serverPort);

       try{
           // get the registry 
           registry=LocateRegistry.getRegistry(
               serverAddress,
               (new Integer(serverPort)).intValue()
           );
           // look up the remote object
           rmiServer=
              (ReceiveCalculationInterface)(registry.lookup("rmiServer"));
           // call the remote method
           rmiServer.receiveMessage(numberOne, operation, numberTwo);
       }
       catch(RemoteException e){
           e.printStackTrace();
       }
       catch(NotBoundException e){
           e.printStackTrace();
       }
    }
}
