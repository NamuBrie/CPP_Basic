#include <iostream>
#include "Auto.h"
using namespace std;

//Constructor ����

Auto::Auto(int _Year, int _Price)
{
	Year = _Year;
	Price = _Price;

	cout << "��� �ڵ��� ����" << endl;
	PrintYear();

}

Auto::~Auto()
{
	cout << "�ڵ��� Ȯ��" << endl;
}


void Auto::PrintYear()
{
	cout << Year << endl;
}

void Auto::PrintPrice()
{
	cout << Price << endl;
}

// Get, Set Method
int Auto::GetYear()
{
	return Year;
}
void Auto::SetYear(int NewYear)
{
	Year = NewYear;
}