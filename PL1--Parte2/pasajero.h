#ifndef PASAJERO_H
#define PASAJERO_H

class pasajero
{
private:
	int prioridad,hora_llegada,duracion,codigo_box,identificador,ns,hora_salida;
	char *destino;
	
public:
	pasajero(int identificador,int prioridad,int hora_llegada,char* destino,int duracion);
	pasajero();
	~pasajero();
    void setNS(int numero);
	void mostrarPasajero();
	void setCodigoBox(int codigo);
	void setHoraSalida(int numero);
	int getPrioridad();
	int getHoraLlegada();
	int getDuracion();
	int getCodigoBox();
    int getIdentificador();
	char* getDestino();
    int getNS();
	int getHoraSalida();
};

#endif // PASAJERO_H
