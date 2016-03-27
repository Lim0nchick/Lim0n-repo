namespace Lab2
{
#include <iostream>
#include <string>
#include <Windows.h>
	using namespace std;

	const int m = 5;
	class Student
	{
	private:
		//explicit Student
		string FIO;
		int Mark[m];
		friend class Printer;
	public:

		explicit Student()
		{
			FIO = "default";
			for (int i = 0; i < m; i++) Mark[i] = 0;
		}
		Student(string fio, int *mark)
		{
			FIO = fio;
			for (int j = 0; j < m; j++)
			{
				Mark[j] = mark[j];
			}
		}

		~Student()
		{
			ZeroMemory(&FIO, sizeof(string));
			ZeroMemory(*&Mark, sizeof(int));
		}
	};

	class Printer
	{
	public:
		void print(Student obj)
		{
			cout << "\nFIO:		" << obj.FIO;
			for (int j = 0; j < m; j++)
			{
				cout << "\nMark #" << j + 1 << ":	" << obj.Mark[j];
			}
		}
	};

}