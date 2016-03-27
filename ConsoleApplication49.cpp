// ConsoleApplication49.cpp: определяет точку входа для консольного приложения.
//

#include <iostream>
#include <string>
#include "Lab2.h"
using namespace std;
using namespace Lab2;

int main()
{
	const int m = 5;
	int n;
	cin >> n;
	string *otl;
	otl = new string[n];
	int *mark;
	mark = new int[m];

	Student **ppS;
	ppS = new Student*[n];
	string fio;
	/*ps = new Student[n];
	pS = new Student[n];*/
	for (int i = 0; i < n; i++)
	{
		int ma = 0;
		cout << "Student #" << i + 1 << endl;
		cout << "input fio#" << i + 1 << endl;

		cin >> fio;
		//int oc = 0;
		for (int j = 0; j < m; j++)
		{
			cin >> mark[j];
			ma += mark[j];
		}

		int oc = ma / m;
		if (oc >= 4) otl[i] = fio;
		ppS[i] = new Student(fio, mark);

	}
	system("cls");
	Printer *pP;
	pP = new Printer[n];
	for (int i = 0; i < n; i++)
	{
		//print(&ppS[i]);
		//&ppS[i]->print(ppS[i]);
		//Printer.print(ppS[i]);
		pP[i].print(*ppS[i]);

		cout << endl;
	}
	cout << endl; cout << endl;
	cout << "Otlichniki: " << endl;
	for (int i = 0; i < n; i++)
	{
		if (otl[i] != "\0") cout << otl[i] << endl;
	}

	system("pause");
	return 0;
}