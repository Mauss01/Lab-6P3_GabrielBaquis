#pragma once
#include "Entidad.h"
class Recipientes : public Entidad{
	int poderAbismal = 0;
	string tipoArma = " ";
public:
	Recipientes(int, string, int);
	void to_String() override;
	string tipo() override;
};

