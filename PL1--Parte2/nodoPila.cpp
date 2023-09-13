#include "nodoPila.h"
#include "pasajero.h"

nodoPila::nodoPila(pasajero p, nodoPila *sig)
{
	this->p=p;
	this->sig=sig;

}

nodoPila::~nodoPila()
{
}

