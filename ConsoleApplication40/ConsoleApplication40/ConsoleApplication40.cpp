// ConsoleApplication40.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include "Auto.h"	// ����, ���������� ������
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <string>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{	
	// ������������� � ���� ����������
	string m1;
	cout << "input model: ";	 cin >> m1;
	double Ms1;
	cout << "input Max Speed: "; cin >> Ms1;
	Auto a1(m1, Ms1);	// ������ ������ � ������� ������������ ������ Auto
	double g1;
	cout << "input car load: ";	 cin >> g1;
	G_Auto ga1(m1, Ms1, g1);	// ������ ������ � ������� ������������ ������ G_Auto
	Auto *pA;
	Auto *pA1;
	pA = &a1;		// 1-�� ������������� "="
	pA->print();
	cout << endl;
	pA1 = &ga1;		// 2-�� ������������� "="
	pA1->print();
	cout << endl;
	system("pause");
	return 0;
}

