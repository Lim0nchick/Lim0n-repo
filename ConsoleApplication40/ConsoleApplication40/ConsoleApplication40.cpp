// ConsoleApplication40.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "Auto.h"	// Файл, содержащий Классы
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <string>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{	
	// Инициализация и ввод переменных
	string m1;
	cout << "input model: ";	 cin >> m1;
	double Ms1;
	cout << "input Max Speed: "; cin >> Ms1;
	Auto a1(m1, Ms1);	// Создаю объект с вызовом конструктора класса Auto
	double g1;
	cout << "input car load: ";	 cin >> g1;
	G_Auto ga1(m1, Ms1, g1);	// Создаю объект с вызовом конструктора класса G_Auto
	Auto *pA;
	Auto *pA1;
	pA = &a1;		// 1-ое использование "="
	pA->print();
	cout << endl;
	pA1 = &ga1;		// 2-ое использование "="
	pA1->print();
	cout << endl;
	system("pause");
	return 0;
}

