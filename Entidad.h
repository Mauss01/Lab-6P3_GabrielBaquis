#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include "Ronda.h"
using namespace std;
class Entidad{
	int vida = 0;
public:
	Entidad(int);
	~Entidad(); //liberacion de memoria de cada Objeto
	virtual void to_String(); //para modificar el metodo en cada Hijo
	virtual string tipo();
	int getVida();
	void restarVida(int);
};

