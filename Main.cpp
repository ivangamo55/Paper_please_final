#include <iostream>
#include <Windows.h>
#include "Persona_peapers.h"
#include <string>
#include <conio.h>

using namespace std;

Papers::Papers() {}
Ine::Ine() {}

int Papers::juego() {
		cout << "Bienvenido a Papers Please\n";
		int menu, respuesta;
		int marcador = 0;
		cout << "Presione 1 para iniciar\n";
		cout << "Presione 0 para salir\n";
		cin >> menu;
		system("cls");
		switch (menu) {
		case 1:
			while(true) {
				cout << "Persona Presentada\n";
				cout << endl << "INE\n" << endl;
				person_1();
				cout << endl << "Pasaporte\n" << endl;
				person_1();
				cout << "Permitir ingreso" << endl << "Si/No\n" << endl;
				cin >> respuesta;
				if (respuesta == 1) {
					marcador++;
					system("cls");
				}
				else {
					marcador--;
					system("cls");
				}
				system("cls");
				cout << "Persona Presentada\n";
				cout << endl << "INE\n" << endl;
				person_2();
				cout << endl << "Pasaporte\n" << endl;
				person_2();
				cout << "Permitir ingreso" << endl << "Si/No\n";
				cin >> respuesta;
				if (respuesta == 1) {
					marcador++;
					system("cls");
				}
				else {
					marcador--;
					system("cls");
				}
				cout << "Persona Presentada\n";
				cout << endl << "INE\n" << endl;
				person_3();
				cout << endl << "Pasaporte\n" << endl;
				person_3();
				cout << "Permitir ingreso" << endl << "Si/No\n";
				cin >> respuesta;
				if (respuesta == 1) {
					marcador--;
					system("cls");
				}
				else {
					marcador++;
					system("cls");
				}
				cout << "Persona Presentada\n";
				cout << endl << "INE\n" << endl;
				person_4();
				cout << endl << "Pasaporte\n" << endl;
				person_4();
				cout << "Permitir ingreso" << endl << "Si/No\n";
				cin >> respuesta;
				if (respuesta == 1) {
					marcador--;
					system("cls");
				}
				else {
					marcador++;
					system("cls");
				}
				cout << "Persona Presentada\n";
				cout << endl << "INE\n" << endl;
				person_5();
				cout << endl << "Pasaporte\n" << endl;
				person_5();
				cout << "Permitir ingreso" << endl << "Si/No\n";
				cin >> respuesta;
				if (respuesta == 1) {
					marcador++;
					system("cls");
				}
				else {
					marcador--;
					system("cls");
				}
				cout << "Persona Presentada\n";
				cout << endl << "INE\n" << endl;
				person_6();
				cout << endl << "Pasaporte\n" << endl;
				person_6();
				cout << "Permitir ingreso" << endl << "Si/No\n";
				cin >> respuesta;
				if (respuesta == 1) {
					marcador++;
					system("cls");
				}
				else {
					marcador--;
					system("cls");
				}
				cout << "Persona Presentada\n";
				cout << endl << "INE\n" << endl;
				person_7();
				cout << endl << "Pasaporte\n" << endl;
				person_7();
				cout << "Permitir ingreso" << endl << "Si/No\n";
				cin >> respuesta;
				if (respuesta == 1) {
					marcador--;
					system("cls");
				}
				else {
					marcador++;
					system("cls");
				}
				system("cls");
				cout <<"Su puntaje es: "<< marcador << endl;
				system("pause");
				system("cls");
				return juego();
				marcador = 0;
			}
			system("pause");
			system("cls");
			break;
		case 0:
			exit(0);
			break;
		}
		return juego();
	}

void Papers::person_1() {
	string pers1_nombre = "Jordi";
	string pers1_pApellido = "Wild";
	string pers1_sApellido = "Owue";
	string pers1_fechaNac = "20/01/1990";
	string pers1_nacionalidad = "Espana";
	string pers1_registro = "9990122";
	cout << "Nombre: " << pers1_nombre<< endl;
	cout << "Primer apellido: " << pers1_pApellido << endl;
	cout << "Segundo apellido: "<< pers1_sApellido << endl;
	cout << "Fecha de nacimiento: " << pers1_fechaNac << endl;
	cout << "Registro: " << pers1_registro << endl;
}

void Papers::person_2() {
	string pers2_nombre = "Alfredo";
	string pers2_pApellido = "Adame";
	string pers2_sApellido = "Machupichu";
	string pers2_fechaNac = "08/03/1938";
	string pers2_nacionalidad = "Mexico";
	string pers2_registro = "123434122";
	cout << "Nombre: " << pers2_nombre << endl;
	cout << "Primer apellido: " << pers2_pApellido << endl;
	cout << "Segundo apellido: " << pers2_sApellido << endl;
	cout << "Fecha de nacimiento: " << pers2_fechaNac << endl;
	cout << "Registro: " << pers2_registro << endl;
}

void Papers::person_3() {
	string pers3_nombre = "Jesus";
	string pers3_pApellido = "De Nazaret";
	string pers3_sApellido = "Mossfet";
	string pers3_fechaNac = "24/12/0000";
	string pers3_nacionalidad = "Isarael";
	string pers3_registro = "0000000";
	cout << "Nombre: " << pers3_nombre << endl;
	cout << "Primer apellido: " << pers3_pApellido << endl;
	cout << "Segundo apellido: " << pers3_sApellido << endl;
	cout << "Fecha de nacimiento: " << pers3_fechaNac << endl;
	cout << "Nacionalidad: " << pers3_nacionalidad << endl;
	cout << "Registro: " << pers3_registro << endl;
}

void Papers::person_4() {
	string pers4_nombre = "Bruce";
	string pers4_pApellido = "Wayne";
	string pers4_sApellido = "Barsman";
	string pers4_fechaNac = "12/10/1939";
	string pers4_nacionalidad = "Gotham City";
	string pers4_registro = "19832002";
	cout << "Nombre: " << pers4_nombre << endl;
	cout << "Primer apellido: " << pers4_pApellido << endl;
	cout << "Segundo apellido: " << pers4_sApellido << endl;
	cout << "Fecha de nacimiento: " << pers4_fechaNac << endl;
	cout << "Nacionalidad: " << pers4_nacionalidad << endl;
	cout << "Registro: " << pers4_registro << endl;
}

void Papers::person_5() {
	string pers5_nombre = "Vicente";
	string pers5_pApellido = "Lara";
	string pers5_sApellido = "Derivada";
	string pers5_fechaNac = "05/07/1968";
	string pers5_nacionalidad = "Bolivia";
	string pers5_registro = "42425232";
	cout << "Nombre: " << pers5_nombre << endl;
	cout << "Primer apellido: " << pers5_pApellido << endl;
	cout << "Segundo apellido: " << pers5_sApellido << endl;
	cout << "Fecha de nacimiento: " << pers5_fechaNac << endl;
	cout << "Nacionalidad: " << pers5_nacionalidad << endl;
	cout << "Registro: " << pers5_registro << endl;
}

void Papers::person_6() {
	string pers6_nombre = "Andrea";
	string pers6_pApellido = "Velazques";
	string pers6_sApellido = "Rodriguez";
	string pers6_fechaNac = "20/11/2001";
	string pers6_nacionalidad = "Mexico";
	string pers6_registro = "10299334";
	cout << "Nombre: " << pers6_nombre << endl;
	cout << "Primer apellido: " << pers6_pApellido << endl;
	cout << "Segundo apellido: " << pers6_sApellido << endl;
	cout << "Fecha de nacimiento: " << pers6_fechaNac << endl;
	cout << "Nacionalidad: " << pers6_nacionalidad << endl;
	cout << "Registro: " << pers6_registro << endl;
}

void Papers::person_7() {
	string pers7_nombre = "Adolf";
	string pers7_pApellido = "Hittler";
	string pers7_sApellido = "Fuhrer";
	string pers7_fechaNac = "20/04/1889";
	string pers7_nacionalidad = "Tercer Imperio Aleman";
	string pers7_registro = "101010101";
	cout << "Nombre: " << pers7_nombre << endl;
	cout << "Primer apellido: " << pers7_pApellido << endl;
	cout << "Segundo apellido: " << pers7_sApellido << endl;
	cout << "Fecha de nacimiento: " << pers7_fechaNac << endl;
	cout << "Nacionalidad: " << pers7_nacionalidad << endl;
	cout << "Registro: " << pers7_registro << endl;
}

int main() {
	Papers run;
	run.juego();
	return 0;
}