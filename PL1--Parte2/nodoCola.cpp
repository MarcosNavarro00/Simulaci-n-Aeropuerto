#include "nodoCola.h"
#include "pasajero.h"

nodoCola::nodoCola(pasajero p, nodoCola *sig)
{
	this->p=p;
	this->sig=sig;
}

nodoCola::~nodoCola()
{
}

