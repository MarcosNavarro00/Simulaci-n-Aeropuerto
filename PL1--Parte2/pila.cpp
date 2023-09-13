 #include "pila.h"
#include "pasajero.h"
#include <stdio.h>
#include <iostream>

using namespace std;

pila::pila()
{
	ultimo=NULL;
}
pila::~pila(){
	
	nodoPila* aux;
	while(ultimo){
		aux = ultimo;
		ultimo = ultimo->sig;
		delete aux;
	}
}

void pila::apilar(pasajero p){
	
	nodoPila* nuevo;
	nuevo = new nodoPila(p, ultimo);
	ultimo = nuevo;
}

void pila::desapilar()
{
	nodoPila* nodo;
	if (ultimo){
		nodo = ultimo;
		ultimo = nodo->sig;
		delete nodo;
	}
	else cout<<"pila vacía"<< endl;
}

void pila::verPila()
{
	nodoPila* aux = ultimo;
	if (!aux) {
		cout<<"Pila vacia"<<endl;
	}
	else {cout<<"Datos de la pila: "<<endl;
		while(aux){
		aux->p.mostrarPasajero();
        aux = aux->sig;
		}
	}
    
	cout << endl;
}

bool pila::pilaVacia(){
	
	nodoPila* aux=ultimo;
	if(!aux){
		return true;
	}
	else{
		return false;
	}
}

pasajero pila::cima(){
	
	nodoPila* cima=ultimo;
	
	return cima->p;	
}


