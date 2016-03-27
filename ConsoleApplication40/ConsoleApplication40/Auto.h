#include <iostream>
#include <string>
using namespace std;
class Auto	// ������� �����: "����������"
{
protected:
	string model;
	double Mspeed;
public:
	Auto(string model, double Mspeed)	// ����������� ��� ������������� ����� ������ "����������"
	{
		this->model = model;
		this->Mspeed	 = Mspeed;
	}
	virtual void print()				// ����������� ������� ������ ����� �� �����
	{
		cout << "\n model:  " << model;
		cout << "\n Max Speed:  " << Mspeed;
	}
	~Auto(){}		// ���������� ������ "����������"
};

class G_Auto : public Auto		// ����������� �����: "�������� ����������" (��������� ���� ������ "����������")
{
	double gruz;
public: 
	
	G_Auto(string model, double Mspeed, double gruz) :		// ����������� ��� ������������� ����� ������ "�������� ����������"
	Auto(model, Mspeed)		// ����� ����� ����������� �������� ������ "����������"
	{
		this->gruz = gruz;
	}
	void print()		// ��������������� ������� print
	{
		Auto::print();	// ���������� � ������� print �������� ������ "����������"
			cout << "\n Gruz:  " << gruz;	// "������������" ���� ����������������

	}
	G_Auto & operator = (G_Auto& A)		// ��������������� ���������� "="
	{
		model = A.model;
		Mspeed = A.Mspeed;
		gruz = A.gruz;
		return *this;
	}
	~G_Auto(){}
};