#include "cola.h"
#include "pasajero.h"
#include <stdio.h>
#include <iostream>
#include <conio.h>

using namespace std;

cola::cola()
{
	frente=NULL;
	ultimo=NULL;
}

cola::~cola()
{
}

void cola::encolar(pasajero p)
{
	nodoCola *nuevo = new nodoCola(p, NULL);
	
	if(frente) {
		ultimo->sig = nuevo;
	} else {
		frente = nuevo;
	}
	ultimo = nuevo;
}

void cola::desencolar()
{
	if (!frente) {	
		cout<<"Vacia, no es posible desencolar"<<endl;
	}else { 
		nodoCola *aux=frente;
		frente=aux->sig;
		delete(aux);
		if (!frente){
			ultimo=NULL;
			}
		}
}

void cola::verCola()
{
	nodoCola *aux=frente;
	if (!frente){
		cout<<"Cola vacia"<<endl;
	}else {	cout<<"Datos de la cola: "<<endl;		
		while (aux) {
			aux->p.mostrarPasajero();
			aux=aux->sig; 
		}
	}
	cout << endl;
}

pasajero cola::primero ()
{
	pasajero dato;
	
	return dato=frente->p;
}

bool cola::esVacia(){
	
	nodoCola* aux=frente;
	if(!aux){
		return true;
	}
	else{
		return false;
	}
}

cola cola::mayor_identificador(cola c){
	
	cola caux,cfinal;
	
	cfinal.encolar(c.primero());//se encola el primer elemento de c a una nueva cola
	c.desencolar();	
	
	while(!c.esVacia()){
		if(cfinal.primero().getIdentificador()>c.primero().getIdentificador()){//se encola en la otra cola si el objeto de cfinal tiene mayor identificador
			caux.encolar(c.primero());
			c.desencolar();
		}
		else{
			caux.encolar(cfinal.primero());//si no se eoncla a la otra cola el elemento introducido por primera vez en la cola 
			cfinal.desencolar();
			cfinal.encolar(c.primero());
			c.desencolar();
		}
	}
	while(!caux.esVacia()){		
		cfinal.encolar(caux.primero());
		caux.desencolar();
	}
	
	return cfinal;
}

cola cola::ordenar_cola(cola c){
	cola cfinal;
	
	while(!c.esVacia()){
		c=c.mayor_identificador(c);
		cfinal.encolar(c.primero());
		c.desencolar();
	}
	
	return cfinal;
}

int cola::longitud_cola()
{
	nodoCola* aux=frente;
	int n=0;
	
	while(aux){
		++n;
		aux=aux->sig;
	}
	return n;
}