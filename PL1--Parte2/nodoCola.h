#ifndef NODOCOLA_H
#define NODOCOLA_H
#include "pasajero.h"

class nodoCola
{
private:	
	pasajero p;
	nodoCola* sig;
	friend class cola;
	
public:
	nodoCola(pasajero p, nodoCola *sig);
	~nodoCola();

};

#endif // NODOCOLA_H
