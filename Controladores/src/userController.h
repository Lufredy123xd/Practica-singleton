/*
 * userController.h
 *
 *  Created on: 20 jun. 2024
 *      Author: Lucia
 */

#ifndef USERCONTROLLER_H_
#define USERCONTROLLER_H_

#include <vector>;
#include "usuario.h";

class userController {
private:
	userController instancia;
	vector<suario> user;
	userController();

public:
	userController getInstancia();

	userController();
	virtual ~userController();
};

#endif /* USERCONTROLLER_H_ */
