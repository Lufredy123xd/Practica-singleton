/*
 * Fabrica.h
 *
 *  Created on: 20 jun. 2024
 *      Author: Lucia
 */

#ifndef FABRICA_H_
#define FABRICA_H_

class Fabrica {
private:
	Fabrica instancia;
	Fabrica();
public:
	Fabrica getFabrica();
	Fabrica();
	virtual ~Fabrica();
};

#endif /* FABRICA_H_ */
