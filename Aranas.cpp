#include "Aranas.h"
Aranas::Aranas(int numeroPatas, bool esVenenosa, int vida) : Entidad(vida) {
	this->esVenenosa = esVenenosa;
	this->numeroPatas = numeroPatas;	
}

string Aranas::tipo() {
	return "Arana";
}
void Aranas::to_String() {
	cout << ".- Arana >>> Numero de Patas: " << numeroPatas << " | Venenosa: " << (esVenenosa = true ? "Si" : "No") << " | Vida: " << Entidad::getVida() << endl;	
}