#pragma once
#include "Entidad.h"
class Aranas : public Entidad{
	int numeroPatas = 0;
	bool esVenenosa = false;
public:
	Aranas(int, bool, int);
	void to_String() override;
	string tipo() override;
};

