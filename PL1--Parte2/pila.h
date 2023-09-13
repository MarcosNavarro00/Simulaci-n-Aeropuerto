#ifndef PILA_H
#define PILA_H
#include "nodoPila.h"
#include <stdio.h>
#include <iostream>
using namespace std;

class pila
{
private:
	nodoPila *ultimo;
public:
	pila();
	~pila();
	void apilar (pasajero p);
	void desapilar();
	void verPila();
	bool pilaVacia();
	pasajero cima();
};

#endif // PILA_H
