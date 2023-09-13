#include "nodoLista.h"

nodoLista::nodoLista(box b, nodoLista* sig, nodoLista* ant)
{
	this->b=b;
	this->sig=sig;
	this->ant=ant;
}

nodoLista::~nodoLista()
{
}

