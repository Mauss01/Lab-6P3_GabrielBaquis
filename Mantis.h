#pragma once
#include "Entidad.h"
class Mantis : public Entidad{
	int precision = 0;
	int filo = 0;
	int honor = 0;
public:
	Mantis(int, int, int , int);
	string to_String() override;
};

