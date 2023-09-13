#include "pasajero.h"
#include <stdlib.h>

#include <iostream>


using namespace std;

pasajero::pasajero(int identificador,int prioridad,int hora_llegada,char* destino,int duracion)
{		
	this->prioridad=prioridad;
	this->hora_llegada=hora_llegada;
	this->destino=destino;
	this->duracion=duracion;
    this->identificador=identificador;
	ns=0;
	hora_salida=0;
}

pasajero::pasajero()
{

}

pasajero::~pasajero()
{
}

int pasajero::getCodigoBox(){
	return codigo_box;
}
char* pasajero::getDestino(){
	return destino;
}
int pasajero::getPrioridad(){
	return prioridad;
}
int pasajero::getDuracion(){
	return duracion;
}
int pasajero::getHoraLlegada(){
	return hora_llegada;
}
int pasajero::getIdentificador(){
	return identificador;
}
int pasajero::getNS(){
	return ns;
}
int pasajero::getHoraSalida(){
	return hora_salida;
}

void pasajero::setCodigoBox(int codigo){
	codigo_box=codigo;
}
void pasajero::setNS(int numero){
	ns+=numero;
}

void pasajero::setHoraSalida(int numero){
	hora_salida=numero;
}

void pasajero::mostrarPasajero(){
	cout <<"Identificador:"<<identificador<<"-Prioridad:"<< prioridad<<"-Destino:"<< destino<<"-Hora de llegada:"<< hora_llegada<<"-Duracion:"<< duracion<<"-Nivel satisfaccion:"<< ns<<"-Hora de salida:"<< hora_salida<<endl;
}

