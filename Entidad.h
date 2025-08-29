#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <cstring>
using namespace std;
class Entidad{
	int vida = 0;
public:
	Entidad(int);
	~Entidad();
	virtual void to_String();
	virtual string tipo();
	int getVida();
};

