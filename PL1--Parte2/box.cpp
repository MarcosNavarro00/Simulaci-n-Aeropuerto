#include "box.h"
#include <stdio.h>
#include <iostream>
#include <conio.h>

using namespace std;

box::box(int codigoBox)
{
	this->codigoBox=codigoBox;
	ocupado=false;
	tiempoDentro=0;
}

box::box()
{
}

box::~box()
{

}

bool box::getOcupado(){
	return ocupado;
}

cola box::getCola(){
	return c;
}

int box::getCodigoBox(){
	return codigoBox;
}

int box::getTiempoDentro(){
	return tiempoDentro;
}

void box::setCola(cola co){
	c=co;
}
	
void box::setOcupado(bool valor){
	ocupado=valor;
}

void box::sumarTiempoDentro(int numero){
	tiempoDentro+=numero;
}

void box::setTiempoDentro(int numero){
	tiempoDentro=numero;
}

void box::verColaBox(){
	cout<<"Datos del box "<<codigoBox<<"["<<endl;
	c.verCola();
	cout<<"]"<<endl;
}


