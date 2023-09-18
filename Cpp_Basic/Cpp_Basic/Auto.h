#pragma once
#include <iostream>
using namespace std;

class Auto
{
private:
	int Year;
	
	
public:
	int Price;
	//Constructor 識情
	Auto(int _Year, int _Price);


	//Destructor 識情
	~Auto();


	//Method
	void PrintYear();
	void PrintPrice();
	int GetYear();
	void SetYear(int NewYear);

};