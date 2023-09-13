#ifndef NODOARBOL_H
#define NODOARBOL_H
#include "pasajero.h"

class nodoArbol
{
private:
    pasajero pasaj;
    nodoArbol *izq;
    nodoArbol *der;
    friend class Arbol;
	
public:
	nodoArbol(pasajero pasaj, nodoArbol *izq, nodoArbol*der);
	~nodoArbol();
};

#endif // NODOARBOL_H
