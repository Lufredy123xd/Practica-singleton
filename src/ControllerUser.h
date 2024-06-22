/*
 * userController.h
 *
 *  Created on: 20 jun. 2024
 *      Author: Lucia
 */

#ifndef USERCONTROLLER_H_
#define USERCONTROLLER_H_

#include <vector>;

#include "InterfaceControllerUser.h"
#include "usuario.h";


class ControllerUser: public InterfaceControllerUser {
private:
	ControllerUser instancia;
	vector<usuario> user;
	ControllerUser();

public:
	ControllerUser getInstancia();

	virtual ~ControllerUser();
};

#endif /* USERCONTROLLER_H_ */
