#pragma once
#include "Entidad.h"
class Arañas : public Entidad{
	int numeroPatas = 0;
	bool esVenenosa = false;
public:
	Arañas(int, bool, int);
};

