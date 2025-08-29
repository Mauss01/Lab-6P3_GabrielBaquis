#include "Entidad.h"
void menu() {
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
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			system(0);
			cout << "Fin del Juego....\n";			
			break;
		}

	} while (opcion != 5);
}

int main(){
	menu();
}