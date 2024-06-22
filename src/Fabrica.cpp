/*
 * Fabrica.cpp
 *
 *  Created on: 20 jun. 2024
 *      Author: Lucia
 */

#include "Fabrica.h"

#include "ControllerUser.h"

Fabrica::Fabrica() {
	// TODO Auto-generated constructor stub

}

Fabrica Fabrica::getFabrica() {
	if(this->instancia == NULL)
		{
			this->instancia = new Fabrica();
		}
		return this->instancia;
}



Fabrica::~Fabrica() {
	// TODO Auto-generated destructor stub
}

