/*
 * usuario.h
 *
 *  Created on: 20 jun. 2024
 *      Author: Lucia
 */

#ifndef USUARIO_H_
#define USUARIO_H_

#include <iostream>
using namespace std;

class usuario {
private:

	string nombre;
	string apellido;
	string cedula;

public:
	usuario();
	virtual ~usuario();
};

#endif /* USUARIO_H_ */
