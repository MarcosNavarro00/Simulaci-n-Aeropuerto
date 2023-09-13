#ifndef ARBOL_H
#define ARBOL_H
#include "nodoArbol.h"
#include "cola.h"


class Arbol
{
private:
    nodoArbol *raiz;
	
public:
    Arbol(nodoArbol *nodo);
    ~Arbol();
	nodoArbol* getRaiz();
	void setNodo(nodoArbol *nodo);
    void insertarNodo (nodoArbol *nodo,pasajero pasaj);
    bool esVacio(nodoArbol *nodo);
    int getSatisfaccion();	
    pasajero getPasajero();
	void mostrarArbol(nodoArbol *nodo, int contador);
    void preOrden_negativos(nodoArbol *nodo);
	void pasajero_mayor(nodoArbol *nodo,pasajero mayor);
	void pasajero_menor(nodoArbol *nodo,pasajero menor);
	int satisfaccion_total(nodoArbol *nodo);
	float satisfaccion_media(nodoArbol *nodo);
	void mayor_satisfaccion_media(nodoArbol *nodo,int media);
	void pasajeros_ordenados(nodoArbol *nodo);
	int numero_nodos(nodoArbol *nodo);
};

#endif // ARBOL_H
