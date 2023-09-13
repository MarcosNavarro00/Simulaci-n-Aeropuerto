#ifndef LISTA_H
#define LISTA_H
#include "nodoLista.h"

class lista
{
private:
	nodoLista *frente, *ultimo;
public:
	lista();
	~lista();
	void insertar(box b, char p);
	bool esVacia();
	box primero();
	box last();
	void verLista();
	int longitud_lista();
	void box_menor();
	void box_mayor();
	lista anadir_pasajero(pasajero p,lista l);
	bool boxes_llenos();
	int boxes_vacios();
	lista borrar_boxes_vacios(lista l);
	void eliminar_nodo(nodoLista *aux);
	void sumar_tiempo_lista();
	cola salida_pasajero(int contador,cola colaF);
	void ordenarLista(lista l1);
};

#endif // LISTA_H
