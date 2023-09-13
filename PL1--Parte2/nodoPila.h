#ifndef NODOPILA_H
#define NODOPILA_H
#include "pasajero.h"

class nodoPila
{	
private:
	pasajero p;
	nodoPila* sig;
	friend class pila;

public:
	nodoPila(pasajero p, nodoPila *sig);
	~nodoPila();

};

#endif // NODOPILA_H
