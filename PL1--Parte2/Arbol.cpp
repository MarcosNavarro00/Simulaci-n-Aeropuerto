#include "Arbol.h"
#include "nodoArbol.h"
#include <stdio.h>
#include <iostream>
#include <conio.h>

using namespace std;

Arbol::Arbol(nodoArbol *nodo)
{
	this->raiz=nodo;
}

Arbol::~Arbol()
{
	
}

nodoArbol* Arbol::getRaiz(){
	return raiz;
}

bool Arbol::esVacio(nodoArbol *nodo){
	if(nodo->der==NULL and nodo->izq==NULL){
		return true;
	}
	else{
		return false;
	} 
}

int Arbol::getSatisfaccion(){
    return raiz->pasaj.getNS();
}

pasajero Arbol::getPasajero(){
    return raiz->pasaj;
}

void Arbol::setNodo(nodoArbol *nodo){
	raiz=nodo;
}

void Arbol::insertarNodo (nodoArbol *nodo,pasajero pasaj)
{
	nodoArbol *actual=nodo;
	
	if(pasaj.getNS()>=actual->pasaj.getNS() and actual->der==NULL){//compara el nodo del nuevo pasajero que se esta insertando con el que ya esta en el nodo
		actual->der=new nodoArbol(pasaj,NULL,NULL);//si se cumple se inserta en la derecha, pero tiene que el siguinete estar a null 
	}
	else if(pasaj.getNS()<actual->pasaj.getNS() and actual->izq==NULL){//se va a la izq
		actual->izq=new nodoArbol(pasaj,NULL,NULL);
	}
	else if(pasaj.getNS()>=actual->pasaj.getNS() and actual->der!=NULL){
		insertarNodo(actual->der,pasaj);
	}
	else if(pasaj.getNS()<=actual->pasaj.getNS() and actual->izq!=NULL){
		insertarNodo(actual->izq,pasaj);
	}
}

void Arbol::mostrarArbol(nodoArbol *nodo,int contador){

	nodoArbol *actual=nodo;
	if(actual==NULL){
		return;
	}
	else{
		mostrarArbol(actual->der,contador+1);
		for(int i=0;i<contador;i++){
			cout<<"   ";
		}
		cout<<actual->pasaj.getNS()<<endl;
		mostrarArbol(actual->izq,contador+1);
	}
}

void Arbol::preOrden_negativos (nodoArbol *nodo)//pasajeros con satisfaccion negativa
{
	if(nodo==NULL){
		return;
	}
	else{
		preOrden_negativos(nodo->izq);
		preOrden_negativos(nodo->der);
		if(nodo->pasaj.getNS()<0){
			nodo->pasaj.mostrarPasajero();
		}
	}
}

void Arbol::pasajero_mayor(nodoArbol *nodo,pasajero mayor){
	
	if(nodo==NULL){
		cout<<"El pasajero con mayor nivel de satisfaccion es:"<<endl;
		mayor.mostrarPasajero();
		return;
	}
	else{
		if(mayor.getNS()<nodo->pasaj.getNS()) {//avanza hasta el nodo mas a la derecha y hasta que el el siguiente no sea null no lo imprime
			mayor=nodo->pasaj;
		}
		pasajero_mayor(nodo->der,mayor);
	}
}

void Arbol::pasajero_menor(nodoArbol *nodo,pasajero menor){
	if(nodo==NULL){
		cout<<"El pasajero con menor nivel de satisfaccion es:"<<endl;
		menor.mostrarPasajero();
		return;
	}
	else{
		if(menor.getNS()>nodo->pasaj.getNS()) {//avanza hasta el nodo mas a la izq y hasta que el el siguiente no sea null no lo imprime
			menor=nodo->pasaj;
		}
		pasajero_menor(nodo->izq,menor);
	}
}

int Arbol::satisfaccion_total(nodoArbol *nodo){//recorre todos los nodos del arol y suma su valor
	
	if(nodo==NULL){
		return 0;
	}
	else{
		return nodo->pasaj.getNS()+satisfaccion_total(nodo->izq)+satisfaccion_total(nodo->der);
	}
}

int Arbol::numero_nodos(nodoArbol *nodo){//recorre el arbol y cuenta el numero total de nodos
	if(nodo==NULL){
		return 0;
	}
	else{
		return 1+numero_nodos(nodo->izq)+numero_nodos(nodo->der);
	}
}

float Arbol::satisfaccion_media(nodoArbol *nodo){
	
	float satisfaccion=satisfaccion_total(nodo);
	float nodos=numero_nodos(nodo)-1;
	return satisfaccion/nodos;
}

void Arbol::mayor_satisfaccion_media(nodoArbol *nodo,int media){
	
	if(nodo==NULL){
		return;
	}
	
	else{
		mayor_satisfaccion_media(nodo->izq,media);//se recorre el arbol por la izq
		if(media<nodo->pasaj.getNS() and nodo->pasaj.getNS()!=0){//si es mayor que la media lo imprime
			nodo->pasaj.mostrarPasajero();
		}
		mayor_satisfaccion_media(nodo->der,media);//se recorre por la derecha
	}
}

void Arbol::pasajeros_ordenados(nodoArbol *nodo){//se ordena a los pasajeros de mayor nivel NS a menos, se recorre en indorden 
	if(nodo==NULL){
		return;
	}
	else{
		pasajeros_ordenados(nodo->der);
		if(nodo->pasaj.getNS()!=0){
			nodo->pasaj.mostrarPasajero();
		}
		pasajeros_ordenados(nodo->izq);
	}
}
