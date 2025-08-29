#include "Arañas.h"
Arañas::Arañas(int numeroPatas, bool esVenenosa, int vida) : Entidad(vida) {
	this->esVenenosa = esVenenosa;
	this->numeroPatas = numeroPatas;	
}