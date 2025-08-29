#pragma once
#include "Entidad.h"
#include <memory>
#include <algorithm>
#include <deque>
template <typename T>

class Ronda{
	int id = 0;
	int HP = 9;	
	std::deque<T> enemigo;
public:
	void restar() {
		HP = HP - 1;
	}
	void insertar(const T& entidad) {
		enemigo.push_back(entidad);
	}
	
	int getVida() {
		return HP;
	}
	
	void iD(int ronda) {
		id = ronda;
	}	

	void extraer() {
		enemigo.pop_front();
	}
	
	size_t size() const {
		return enemigo.size();
	}
};

