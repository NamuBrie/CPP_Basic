#pragma once
#include <iostream>
using namespace std;

class Auto
{
private:
	int Year;
	
	
public:
	int Price;
	//Constructor ����
	Auto(int _Year, int _Price);


	//Destructor ����
	~Auto();


	//Method
	void PrintYear();
	void PrintPrice();
	int GetYear();
	void SetYear(int NewYear);

};