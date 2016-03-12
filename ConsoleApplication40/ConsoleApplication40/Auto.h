#include <iostream>
#include <string>
using namespace std;
class Auto	// Базовый класс: "Автомобиль"
{
protected:
	string model;
	double Mspeed;
public:
	Auto(string model, double Mspeed)	// Конструктор для инициализации полей класса "Автомобиль"
	{
		this->model = model;
		this->Mspeed	 = Mspeed;
	}
	virtual void print()				// Вирутальная функция вывода полей на экран
	{
		cout << "\n model:  " << model;
		cout << "\n Max Speed:  " << Mspeed;
	}
	~Auto(){}		// Деструктор класса "Автомобиль"
};

class G_Auto : public Auto		// Производный класс: "Грузовой Автомобиль" (наследует поля класса "Автомобиль")
{
	double gruz;
public: 
	
	G_Auto(string model, double Mspeed, double gruz) :		// Конструктор для инициализации полей класса "Грузовой Автомобиль"
	Auto(model, Mspeed)		// Явный вызов коструктора базового класса "Автомобиль"
	{
		this->gruz = gruz;
	}
	void print()		// Переопределение функции print
	{
		Auto::print();	// Обращаемся к функции print базавого класса "Автомобиль"
			cout << "\n Gruz:  " << gruz;	// "Допечатываем" поле грузоподъемность

	}
	G_Auto & operator = (G_Auto& A)		// Переопределение опрератора "="
	{
		model = A.model;
		Mspeed = A.Mspeed;
		gruz = A.gruz;
		return *this;
	}
	~G_Auto(){}
};