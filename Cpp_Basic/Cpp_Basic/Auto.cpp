#include <iostream>
#include "Auto.h"
using namespace std;

//Constructor 정의

Auto::Auto(int _Year, int _Price)
{
	Year = _Year;
	Price = _Price;

	cout << "출고 자동차 연식" << endl;
	PrintYear();

}

Auto::~Auto()
{
	cout << "자동차 확인" << endl;
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