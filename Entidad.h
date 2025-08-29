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
	virtual string to_String();
	int getVida();
};

