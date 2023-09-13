#include "lista.h"
#include "box.h"
#include <stdio.h>
#include <iostream>
#include <conio.h>

using namespace std;

lista::lista()
{
	frente=NULL;
	ultimo=NULL;
}

lista::~lista()
{
}

void lista::insertar(box b, char p)//se inserta un box en la lista
{
	nodoLista *aux= new nodoLista(b,NULL,NULL);
	
	if(esVacia()) { //Si la lista está vacía
		ultimo=frente=aux;
	}
	else if (p=='f') {//Inserción por el final
		aux->ant=ultimo;
		ultimo->sig=aux;
		ultimo=aux;
	}
	else if (p=='p') {//Inserción por el principio
		aux->sig=frente;
		frente->ant=aux;
		frente=aux;
	}
}

bool lista::esVacia()
{
	nodoLista *aux=frente;
	if(!aux){
		return true;
	}
	else{
		return false;
	}
}

box lista::primero()
{
	box dato;	
	return dato=frente->b;
}

box lista::last()
{
	box dato;
	
	return dato=ultimo->b;
}

void lista::verLista()
{
	nodoLista *aux=frente;
	if (!frente){
		cout<<"Lista vacia"<<endl;
	}else {	cout<<"Datos de la lista{ "<<endl;		
		while (aux) {
			aux->b.verColaBox();
			aux=aux->sig; 
		}
	}
	cout <<"}"<< endl;
}

int lista::longitud_lista()
{
	nodoLista* aux=frente;
	int n=0;
	
	while(aux){
		++n;
		aux=aux->sig;
	}
	return n;
}

void lista::box_menor(){
	nodoLista *aux=frente;
	box bmenor=frente->b;
	if (!frente){
		cout<<"Lista vacia"<<endl;
	}else {		
		while (aux) {
			if(aux->b.getCola().longitud_cola()<bmenor.getCola().longitud_cola()){
				bmenor=aux->b;
				aux=aux->sig; 
			}
			else{
				aux=aux->sig;
			}
		}
	}
	cout<<"El identificador del box con menos pasajeros es:"<<bmenor.getCodigoBox()<<endl;
}

void lista::box_mayor(){
	nodoLista *aux=frente;
	box bmayor=frente->b;
	if (!frente){
		cout<<"Lista vacia"<<endl;
	}else {		
		while (aux) {
			if(aux->b.getCola().longitud_cola()>bmayor.getCola().longitud_cola()){
				bmayor=aux->b;
				aux=aux->sig; 
			}
			else{
				aux=aux->sig;
			}
		}
	}
	cout<<"El identificador del box con mas pasajeros es:"<<bmayor.getCodigoBox()<<endl;
}

lista lista::anadir_pasajero(pasajero p,lista l)
{
	bool introducido=false;
	nodoLista *aux=frente;
	box bauxiliar;
	cola c;
	
	while(aux and !introducido){
		if(aux->b.getCola().longitud_cola()<2){//se le añade un pasajero dentro de un box de la lista
			bauxiliar=aux->b;
			c=bauxiliar.getCola();
			c.encolar(p);//se encola el pasajero a una cola que viene de la pila
			bauxiliar.setCola(c);
			bauxiliar.setOcupado(true);
			aux->b=bauxiliar;
			introducido=true;
			
			cout<<"Entra en el box "<<aux->b.getCodigoBox()<<":"<<endl;
			p.mostrarPasajero();
		}
		else{
			aux=aux->sig;
		}
	}
	return l;
}

bool lista::boxes_llenos()
{
	bool lleno=false;
	nodoLista *aux=frente;
	while(aux and !lleno){
		if(aux->b.getCola().longitud_cola()<2){
			lleno=true;
		}
		else{
			aux=aux->sig;
		}
	}
	return lleno;
}

int lista::boxes_vacios()
{
	int numero=0;
	nodoLista *aux=frente;
	while(aux){
		if(aux->b.getCola().longitud_cola()==0){
			numero++;
			aux=aux->sig;
		}
		else{
			aux=aux->sig;
		}
	}
	return numero;
}

lista lista::borrar_boxes_vacios(lista l)//para poder recorrer la lista entera si el box no es cero se añade a una lista aux y si lo es se elimina el nodo
{
	lista listaFinal;
	
	while(!l.esVacia()){
		nodoLista *aux=l.frente;
		if(aux->b.getCola().longitud_cola()==0){
			l.eliminar_nodo(aux);
		}		
		else{
			listaFinal.insertar(l.primero(),'f');
			l.eliminar_nodo(aux);
		}
	}
	if(listaFinal.esVacia()){
		listaFinal.insertar(box(1),'f');
	}
	
	return listaFinal;
}

void lista::eliminar_nodo(nodoLista *aux){
	
	nodoLista *aux_borrar=aux;
	
	frente=frente->sig;
	delete aux_borrar;
}

void lista::sumar_tiempo_lista(){
	
	nodoLista *aux=frente;
	
	while(aux){
		if(aux->b.getOcupado()){
			aux->b.sumarTiempoDentro(1);
			aux=aux->sig;
		}else{
			aux=aux->sig;
		}
	}
}

cola lista::salida_pasajero(int contador,cola colaF){
	nodoLista *aux=frente;
	cola caux;
	pasajero paux;
	
	while(aux){
		if(aux->b.getOcupado()){//si esta ocupado el box
			if(aux->b.getTiempoDentro()==aux->b.getCola().primero().getDuracion()){//si el tiempo del box es igual al timepo de duracion del pasajero este se sale
				paux=aux->b.getCola().primero();
				paux.setHoraSalida(contador);
				cout<<"Sale del box"<<aux->b.getCodigoBox()<<":"<<endl;
				paux.mostrarPasajero();
				colaF.encolar(paux);
				caux=aux->b.getCola();
				caux.desencolar();
				aux->b.setCola(caux);
				
				if(aux->b.getCola().longitud_cola()==0){
					aux->b.setOcupado(false);
				}
				aux->b.setTiempoDentro(0);
			}
			aux=aux->sig;
		}else{
			aux=aux->sig;
		}
	}
	return colaF;//devuelve la cola final con el pasajero fuera
}
/*
int lista::tiempo_pasajero(int contador){
	nodoLista *aux=frente;
	cola caux;
	pasajero paux;
	int tiempo=0;
	
	while(aux){
		if(aux->b.getOcupado()){//si esta ocupado el box
			if(aux->b.getTiempoDentro()==aux->b.getCola().primero().getDuracion()){
				tiempo+=contador-aux->b.getCola().primero().getHoraLlegada()+1;
				
				paux=aux->b.getCola().primero();
				paux.setHoraSalida(contador);
				cout<<"Sale del box"<<aux->b.getCodigoBox()<<":"<<endl;
				paux.mostrarPasajero();
				
				caux=aux->b.getCola();
				caux.desencolar();
				aux->b.setCola(caux);
				
				if(aux->b.getCola().longitud_cola()==0){
					aux->b.setOcupado(false);
				}
				aux->b.setTiempoDentro(0);
			}
			aux=aux->sig;
		}else{
			aux=aux->sig;
		}
	}
	return tiempo;
}*/

