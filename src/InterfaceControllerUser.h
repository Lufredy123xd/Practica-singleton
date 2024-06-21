/*
 * InterfaceControlador.h
 *
 *  Created on: 20 jun. 2024
 *      Author: Valentino Vignolo
 */

#ifndef PRACTICA_SINGLETON_SRC_INTERFACECONTROLLERUSER_H_
#define PRACTICA_SINGLETON_SRC_INTERFACECONTROLLERUSER_H_

#include <iostream>
using namespace std;
#include <string>

class InterfaceControllerUser {


public:

	InterfaceControllerUser();

	void agregarUsuario(string, string, string);




	virtual ~InterfaceControllerUser();

};

#endif /* PRACTICA_SINGLETON_SRC_INTERFACECONTROLLERUSER_H_ */
