#include "Entidad.h"
#include "Aranas.h"
#include "Mantis.h"
#include "Recipientes.h"
#include <iostream>

void entidades(vector<Entidad*>& listaEntidades) {
	for (int indice = 0; indice < 1; indice++){
		for (int i = 0; i < listaEntidades.size(); i++){
			if(listaEntidades[i]->to_String() == "Recipientes") {}
		}
	}
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
						entidad = new Recipientes(poderAbismal,tipoArma, vida);
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
			cout << "Vida de Arana: "; cin >> vida;
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
			cout << "Ingrese cuanta tiene de vida Recipientes: "; cin >> vida;
			if (vida > 0 && vida <= 3000) {
				cout << "Precision de Mantis: "; cin >> precision;

				if (precision >= 1 && precision <= 3){
					cout << "Filo de Mantis: "; cin >> filo;

					if (filo >= 1 && filo <= 9){
						cout << "Honor de Mantis: "; cin >> honor;

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
			menu(listaEntidades);
			break;
		case 4:
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