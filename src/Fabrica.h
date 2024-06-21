/*
 * Fabrica.h
 *
 *  Created on: 20 jun. 2024
 *      Author: Lucia
 */

#ifndef FABRICA_H_
#define FABRICA_H_

#include <iostream>
using namespace std;
#include "ControllerUser.h"


class Fabrica {
private:
	ControllerUser controller;
	Fabrica instancia;
	Fabrica();
public:

	Fabrica getFabrica();

	virtual ~Fabrica();
};

#endif /* FABRICA_H_ */
