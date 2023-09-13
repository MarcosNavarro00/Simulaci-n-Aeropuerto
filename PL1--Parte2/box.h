#ifndef BOX_H
#define BOX_H
#include "cola.h"

class box
{
private:
	int codigoBox,tiempoDentro;
	bool ocupado;
	cola c;
	
public:
	box(int codigoBox);
	box();
	~box();
	bool getOcupado();    
	cola getCola();
	int getCodigoBox();
	int getTiempoDentro();
	void sumarTiempoDentro(int numero);
	void setCola(cola c);
	void setOcupado(bool valor);
	void setTiempoDentro(int numero);
	void verColaBox();
};

#endif // BOX_H
