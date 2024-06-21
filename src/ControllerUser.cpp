/*
 * userController.cpp
 *
 *  Created on: 20 jun. 2024
 *      Author: Lucia
 */

#include "ControllerUser.h"

ControllerUser::ControllerUser() {
	// TODO Auto-generated constructor stub

}

ControllerUser::~ControllerUser() {
	// TODO Auto-generated destructor stub
}
ControllerUser ControllerUser::getInstancia(){
	if(this->instancia == NULL)
	{
		this->instancia = new ControllerUser();
	}
	return this->instancia;
}
