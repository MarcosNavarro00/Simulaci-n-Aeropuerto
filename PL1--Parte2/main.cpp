#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include "pila.h"
#include "Cola.h"
#include "lista.h"
#include "Arbol.h"
#include "pasajero.h"
#include "box.h"

using namespace std;

int calculoTiempoEspera(pasajero pasaj,int contador);
int calculoNS(pasajero pasaj,int media);

int main(int argc, char **argv)
{
	int contador=0,tiempoTotal=0,numeroPasajeros=0,opcion=0,ns;
	float media;
    bool finalizado=false;
	pasajero paux;
	pila p;    
	cola c,caux;
	lista l1;
	box b1(1);
	l1.insertar(b1,'p');
	
	pasajero pasajeroAuxiliar(0,0,0,"",0);
	pasajero p1(1,6,0,"Indonesia",20);//iden, prio, hora llegada y duracion 
	pasajero p2(2,1,0,"Portugal",15);
	pasajero p3(3,7,5,"Australia",39);
	pasajero p4(4,5,7,"Sudafrica",23);
	pasajero p5(5,6,9,"Indonesia",16);
	pasajero p6(6,4,11,"Noruega",23);
	pasajero p7(7,7,14,"Australia",31);
	pasajero p8(8,2,18,"Italia",14);
	pasajero p9(9,3,20,"Alemania",20);   
	
	Arbol arbol(new nodoArbol(pasajeroAuxiliar,NULL,NULL));
	
	p.apilar(p9);
	p.apilar(p8);
	p.apilar(p7);
	p.apilar(p6);
	p.apilar(p5);
	p.apilar(p4);
	p.apilar(p3);
	p.apilar(p2);
	p.apilar(p1);

	while(!finalizado){
		bool valido=false;
//		while(!valido){
//			cout<<"Elige una opcion:"<<endl;
//			cout<<"\t1:Ver box con menos pasajeros\n\t2:Ver box con mas pasajeros\n\t3:Ver los boxes operativos\n\t4:Pasar tiempo"<<endl;
//			cin>>opcion;
////			switch(opcion){
////				case 1:
////					l1.box_menor();
////					break;
////				case 2:
////					l1.box_mayor();
////					break;
////				case 3:
////					cout<<"Hay "<<l1.longitud_lista()<<" boxes operativos"<<endl;
////					break;
////				case 4:
////					valido=true;
////					break;
////				default:
////					cout<<"No has introducido una opcion valida"<<endl;
////					break;
////			}
//		}
		while(!p.pilaVacia()){
			if(contador!=p.cima().getHoraLlegada()){//si el contador no es igual a la hora de llegada se detiene el while
				break;
			}
			if(contador==p.cima().getHoraLlegada()){//se introduce el pasajero a un box libre de la lista
				if(l1.boxes_llenos()){
					l1=l1.anadir_pasajero(p.cima(),l1);//se añade el pasaj a una cola que esta en la lista que viene de la pila
					p.desapilar();
					numeroPasajeros++;
				}
				else{//si estan todos los boxes llenos se crea un nuevo box
					l1.insertar(box(l1.last().getCodigoBox()+1),'f');//se inserta un nuevo box a la lista por el final
					l1=l1.anadir_pasajero(p.cima(),l1); //se le añade al box 
					p.desapilar();
					numeroPasajeros++;
				}
			}
		}
		l1.sumar_tiempo_lista();//suma el tiempo que el pasaj esta dentro del box
		c=l1.salida_pasajero(contador,c);//sale el pasajero del box
		if(!c.esVacia()){
			c=c.ordenar_cola(c);//se ordena la cola
		}
		if(l1.boxes_vacios()>=2){//si hay mas de dos boxes vacíos los eliminamos
			l1=l1.borrar_boxes_vacios(l1);
		}
		
		if(p.pilaVacia() and l1.longitud_lista()==1 and !l1.primero().getOcupado()){//si se cumpole esto se sale del box
			finalizado=true;
		}
		contador ++;
		cout<<"Tiempo: "<<contador<<endl;
	}
	c.verCola();
	while(!c.esVacia()){//cuando los pasajeros terminan la atencion se insertan en esta nueva cola
		tiempoTotal+=c.primero().getHoraSalida()-c.primero().getHoraLlegada();
		caux.encolar(c.primero());
		c.desencolar();
	}
	media=tiempoTotal/numeroPasajeros;
	
	while(!caux.esVacia()){//se sacan los pasajeros de la cola y se insertan en el arbol 
		paux=caux.primero();
		paux.setNS(media-(caux.primero().getHoraSalida()-caux.primero().getHoraLlegada()));
		arbol.insertarNodo(arbol.getRaiz(),paux);
		caux.desencolar();
	}
	arbol.mostrarArbol(arbol.getRaiz(),0);
	
	cout<<"Pasajeros con satisfaccion negativa{"<<endl;
	arbol.preOrden_negativos(arbol.getRaiz());
	cout<<"}"<<endl;
	arbol.pasajero_mayor(arbol.getRaiz(),arbol.getPasajero());
	arbol.pasajero_menor(arbol.getRaiz(),arbol.getPasajero());
	cout<<"Satisfaccion media:"<<arbol.satisfaccion_media(arbol.getRaiz())<<setprecision(2)<<endl;
	cout<<"Pasajeros con mayor satisfaccion que la media{"<<endl;
	arbol.mayor_satisfaccion_media(arbol.getRaiz(),arbol.satisfaccion_media(arbol.getRaiz()));
	cout<<"}"<<endl;
	cout<<"Pasajeros ordenados{"<<endl;
	arbol.pasajeros_ordenados(arbol.getRaiz());
	cout<<"}"<<endl;

	cout<<"El tiempo medio de atencion es de:"<<tiempoTotal<<"/"<<numeroPasajeros<<"="<<media<<" minutos"<<endl;
	
	return 0;
}