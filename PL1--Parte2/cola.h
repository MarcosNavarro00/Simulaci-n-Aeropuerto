#ifndef COLA_H
#define COLA_H
#include "nodoCola.h"
#include "pasajero.h"

class cola
{
private:
	nodoCola *frente, *ultimo;
	
public:
	cola();
	~cola();
	void encolar(pasajero p);
	void desencolar();
	pasajero primero();
	bool esVacia();
	void verCola();
	cola mayor_identificador(cola c);
	cola ordenar_cola(cola c);
	int longitud_cola();
};

#endif // COLA_H
