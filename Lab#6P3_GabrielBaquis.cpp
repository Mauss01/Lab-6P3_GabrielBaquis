#include "Entidad.h"
#include "Aranas.h"
#include "Mantis.h"
#include "Recipientes.h"
#include <iostream>
void Hornet(vector<Entidad*>& listaEntidades) {	
	Ronda<Entidad>enemigo;
	int opcion = 0;
	cout << "\n--- Seleccion Dificultad ---\n\n";
	cout << "1. Prueba del Guerrrero\n";
	cout << "2. Prueba de Supervivencia\n";
	cout << "3. Prueba del Campeon\n";

	switch (opcion) {
	case 1:		
		enemigo.insertar(*listaEntidades[0]);	
		break;
	case 2:
		for (int i = 0; i < listaEntidades.size() / 2; i++) {
			enemigo.insertar(*listaEntidades[i]);
		}
		break;
	case 3:
		for (int i = 0; i < listaEntidades.size(); i++) {
			enemigo.insertar(*listaEntidades[i]);
		}
		break;
	}
}

void listado(vector<Entidad*>& listaEntidades) {
	cout << "\n--- Entidades ---\n\n"; int posicion = 0;
	for (int i = 0; i < listaEntidades.size(); i++){
		cout << i; listaEntidades[i]->to_String();
	}

	cout << "Ingrese que Entidad desea eliminar: "; cin >> posicion;
	if (posicion > 0 && posicion <= listaEntidades.size()){
		cout << "Eliminado- " << listaEntidades[posicion]->tipo() << endl << endl;
		listaEntidades.erase(listaEntidades.begin() + posicion);
	}		
}

void entidades(vector<Entidad*>& listaEntidades) {
	if (!listaEntidades.empty()){
		cout << "\n--- Entidades ---\n\n";
		for (int indice = 0; indice < 1; indice++) {
			 //for para identificar con condicional especifico
			for (int i = 0; i < listaEntidades.size(); i++) {
				if (listaEntidades[i]->tipo() == "Recipientes") { listaEntidades[i]->to_String(); }
			}

			for (int j = 0; j < listaEntidades.size(); j++) {
				if (listaEntidades[j]->tipo() == "Arana") { listaEntidades[j]->to_String(); }
			}

			for (int l = 0; l < listaEntidades.size(); l++) {
				if (listaEntidades[l]->tipo() == "Mantis") { listaEntidades[l]->to_String(); }
			}
		}
	}	

	cout << endl << endl;
}

void menuEntidades(vector<Entidad*>& listaEntidades) {
	int opcion = 0;
	Entidad* entidad;
	int vida = 0, poderAbismal = 0, numPatas = 0, precision = 0, filo = 0, honor = 0; string tipoArma = " ", vene = " "; bool sOn = false;
	do{
		cout << "\n--- Agregar Entidad al Vector ---\n";
		cout << "Eliga el tipo de entidad que quiere agregar: \n\n";
		cout << "1. Recipiente\n";
		cout << "2. Arana\n";
		cout << "3. Mantis\n";
		cin >> opcion;
		switch (opcion) {
		case 1:
			cout << "Vida de Recipientes (max HP: 3000): "; cin >> vida;
			if (vida > 0 && vida <= 3000) {
				cout << "Poder Abismal de Recipientes (1-3): "; cin >> poderAbismal;

				if (poderAbismal >= 1 && poderAbismal <= 3){
					cout << "Tipo de Arma de Recipientes: \n.-Aguja\n.-Clavo\n.-Abismo\n"; cin >> tipoArma;
				
					if (tipoArma == "Aguja" || tipoArma == "Clavo" || tipoArma == "Abismo") {
						entidad = new Recipientes(poderAbismal,tipoArma, vida); //llamado de herencia usando solamente el Padre
						listaEntidades.push_back(entidad); cout << "Recipientes creado con exito!!\n\n";

					}else {
						cout << "Creacion invalida, tipo de arma no aceptada\n\n";
					}
				}else {
					cout << "Creacion invalida, poder abismal no aceptado\n\n";
				}
			}else {
				cout << "Creacion invalida, vida no aceptada\n\n";
			}
			break;

		case 2:
			cout << "Vida de Arana (max HP: 3000): "; cin >> vida;
			if (vida > 0 && vida <= 3000) {
				cout << "Numero de Patas de Arana: "; cin >> numPatas;
				cout << "Es venenosa Arana (s/n)?"; cin >> vene;

				if (vene == "s" || vene == "S") {
					sOn = true;
					entidad = new Aranas(numPatas, sOn, vida);
					listaEntidades.push_back(entidad); cout << "Arana creada exitosamente!!\n\n";

				}else if (vene == "n" || vene == "N") {
					sOn = false;
					entidad = new Aranas(numPatas, sOn, vida);
					listaEntidades.push_back(entidad); cout << "Arana creada exitosamente!!\n\n";

				}else {
					cout << "Creacion invalida, invalidacion si tipo venenosa\n\n";
				}
			}else {
				cout << "Creacion invalida, vida no aceptada\n\n";
			}
			break;

		case 3:
			cout << "Vida de Mantis (max HP: 3000): "; cin >> vida;
			if (vida > 0 && vida <= 3000) {
				cout << "Precision de Mantis (1-3): "; cin >> precision;

				if (precision >= 1 && precision <= 3){
					cout << "Filo de Mantis (1-9): "; cin >> filo;

					if (filo >= 1 && filo <= 9){
						cout << "Honor de Mantis (1-3): "; cin >> honor;

						if (honor >= 1 && honor <= 3){
							entidad = new Mantis(precision, filo, honor, vida); cout << "Mantis creado con exito!!\n\n";
							listaEntidades.push_back(entidad);

						}else {
							cout << "Creacion invalida, honot no aceptado\n\n";
						}
					}else {
						cout << "Creacion invalida, filo no aceptado\n\n";
					}
				}else {
					cout << "Creacion invalida, precision no aceptada\n\n";
				}
			}else {
				cout << "Creacion invalida, vida no aceptada\n\n";
			}
			break;

		default: cout << "Opcion invalida...\n\n";
			break;
		}
	} while (opcion <= 1 && opcion >= 3);	
}

void menu(vector<Entidad*> &listaEntidades) {
	int opcion = 0;
	do{		
		cout << "Coliseo de los Insensatos\n\n";
		cout << "1. Agregar Entidad\n";
		cout << "2. Listar Entidades\n";
		cout << "3. Eliminar Entidades\n";
		cout << "4. Desafio de Hornet\n";
		cout << "5. Cancelacion Del Coliseo de los Insensatos\n";
		cout << "Seleccionar opcion: "; cin >> opcion;

		switch (opcion) {
		case 1:
			menuEntidades(listaEntidades);
			menu(listaEntidades);
			break;
		case 2:
			entidades(listaEntidades);
			menu(listaEntidades);
			break;
		case 3:
			listado(listaEntidades);
			menu(listaEntidades);
			break;
		case 4:
			Hornet(listaEntidades);
			menu(listaEntidades);
			break;
		case 5:			
			cout << "Fin del Juego....\n";	
			exit(0);
			break;
		default: cout << "Opcion invalida...\n\n";
			break;
		}

	} while (opcion != 5);
}

int main(){
	vector<Entidad*> listaEntidades;
	menu(listaEntidades);
	listaEntidades.clear();
}