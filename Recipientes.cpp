#include "Recipientes.h"
Recipientes::Recipientes(int poderAbismal, string tipoArma, int vida) : Entidad(vida) {
	this->poderAbismal = poderAbismal;
	this->tipoArma = tipoArma;
}

string Recipientes::to_String() {
	return "Recipientes";
}