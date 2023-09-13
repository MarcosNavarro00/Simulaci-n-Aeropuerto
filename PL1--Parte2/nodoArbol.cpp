#include "nodoArbol.h"
#include "pasajero.h"
#include <stdio.h>
#include <iostream>
#include <conio.h>

nodoArbol::nodoArbol(pasajero pasaj, nodoArbol *izq, nodoArbol*der)
{	
    this->pasaj = pasaj;
    this->izq = izq;
    this->der = izq;
}

nodoArbol::~nodoArbol()
{
}

