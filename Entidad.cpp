#include "Entidad.h"
Entidad::~Entidad() {}

Entidad::Entidad(int vida) {
	this->vida = vida;
}

string Entidad::to_String() { return ""; }

int Entidad::getVida() {
	return vida;
}