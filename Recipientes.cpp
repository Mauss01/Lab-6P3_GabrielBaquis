#include "Recipientes.h"
Recipientes::Recipientes(int poderAbismal, string tipoArma, int vida) : Entidad(vida) {
	this->poderAbismal = poderAbismal;
	this->tipoArma = tipoArma;
}

string Recipientes::tipo() {
	return "Recipientes";
}

void Recipientes::to_String() {
	cout << ".- Recipientes >>> Poder Abismal: " << poderAbismal << " | Tipo de Arma: " << tipoArma << " | Vida: " << Entidad::getVida() << endl;
}