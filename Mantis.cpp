#include "Mantis.h"
Mantis::Mantis(int precision, int filo, int honor, int vida) : Entidad(vida) {
	this->filo = filo;
	this->honor = honor;
	this->precision = precision;
}

string Mantis::to_String() {
	cout << ".- Mantis >>> Precision: " << precision << " | Filo: " << filo << " | Honor: " << honor << " | Vida: " << Entidad::getVida();
	return "Mantis";
}