#ifndef NODOLISTA_H
#define NODOLISTA_H
#include "box.h"

class nodoLista
{
private:
	box b;
	nodoLista* sig;
	nodoLista* ant;
	friend class lista;
public:
	nodoLista(box b, nodoLista* sig, nodoLista* ant);
	~nodoLista();

};

#endif // NODOLISTA_H
