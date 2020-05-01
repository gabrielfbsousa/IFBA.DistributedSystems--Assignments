/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package atividadeRmi;

import java.rmi.*;
import java.rmi.registry.*;
import java.rmi.server.*;
import java.net.*;
import java.rmi.server.UnicastRemoteObject;
 
public class RmiServer extends UnicastRemoteObject implements ReceiveCalculationInterface
{
    int      thisPort;
    String   thisAddress;
    Registry registry;    // rmi registry for lookup the remote objects.

    InetAddress Address;
    int resultOfCalculation;
    
    // This method is called from the remote client by the RMI.
    // This is the implementation of the ReceiveMessageInterface.
    public void receiveMessage(int numberOne, int operation, int numberTwo) throws RemoteException
    {
        switch(operation){
            case 1: sum(numberOne, numberTwo); break;
            case 2: subtraction(numberOne, numberTwo); break;
            case 3: multiplication(numberOne, numberTwo); break;
            case 4: division(numberOne, numberTwo); break;
        }
        
        System.out.println(resultOfCalculation);
    }
    
    public void sum (int numberOne, int numberTwo){
        resultOfCalculation = numberOne + numberTwo;
    }
    
    public void subtraction (int numberOne, int numberTwo){
        resultOfCalculation = numberOne - numberTwo;
    }
    
    public void multiplication (int numberOne, int numberTwo){
        resultOfCalculation = numberOne * numberTwo;
    }
    
    public void division (int numberOne, int numberTwo){
        resultOfCalculation = numberOne / numberTwo;
    }
 
    public RmiServer() throws RemoteException
    {
        try{
            // get the address of this host.
            InetAddress Address = InetAddress.getLocalHost(); 
            System.out.println(Address.toString());
            thisAddress= (InetAddress.getLocalHost()).toString();
            
        }
        catch(Exception e){
            System.out.println("this address="+thisAddress);
            throw new RemoteException("can't get inet address.");
        }
        thisPort=3232;  // this port(registrys port)
        System.out.println("this address="+thisAddress+",port="+thisPort);
        try{
        // create the registry and bind the name and object.
        registry = LocateRegistry.createRegistry( thisPort );
            registry.rebind("rmiServer", this);
        }
        catch(RemoteException e){
        throw e;
        }
    }
   
    static public void main(String args[])
    {
        try{
        RmiServer s=new RmiServer();
    }
    catch (Exception e) {
           e.printStackTrace();
           System.exit(1);
    }
     }
}
