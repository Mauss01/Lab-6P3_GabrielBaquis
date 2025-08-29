#include "Entidad.h"
Entidad::~Entidad() {}

Entidad::Entidad(int vida) {
	this->vida = vida;
}

void Entidad::to_String() {}

string Entidad::tipo() { return " "; }

int Entidad::getVida() {
	return vida;
}