#pragma once
#include<string>

class Papers
{
public:
	Papers();
	int juego();
	void person_1();
	void person_2();
	void person_3();
	void person_4();
	void person_5();
	void person_6();
	void person_7();
	void menu();
};

class Ine:public Papers {
public:
	Ine();
	void show();
};