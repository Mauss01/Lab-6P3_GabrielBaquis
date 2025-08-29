#include "Aranas.h"
Aranas::Aranas(int numeroPatas, bool esVenenosa, int vida) : Entidad(vida) {
	this->esVenenosa = esVenenosa;
	this->numeroPatas = numeroPatas;	
}

string Aranas::to_String() {
	return "Aranas";
}