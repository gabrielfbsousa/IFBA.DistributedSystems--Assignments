/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package atividadeRmi;

import java.rmi.*;

/**
 *
 * @author gabriel
 */
public interface ReceiveCalculationInterface extends Remote{
    	void receiveMessage(int numberOne, int operation, int numberTwo) throws RemoteException;

}
