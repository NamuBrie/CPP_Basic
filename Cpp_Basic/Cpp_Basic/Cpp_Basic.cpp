// Cpp_Basic.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "CPP_Basic.h"
#include "io.h"
#include "Auto.h"
#include "Ch10_Class.h"
#include "Animal.h"
#include "Bike.h"
#include "Atv.h"
#include "Arithmatic.h"
#include "Mobile.h"

int main()
{
	//클래스 정적 선언
	Auto Ray(2023, 12000000);

	Ray.PrintYear();

	Ray.SetYear(2021);
	Ray.PrintYear();

	//Ray.Price = 10000000;
	Ray.PrintPrice();
	
	Ray.SetYear(2021);

	cout << Ray.GetYear() << endl;

	//클래스 동적 선언(생성)
	Animal* Dog = new Animal;
	Dog->PrintFinger();

	delete Dog;

	//자식 클래스 생성
	Atv Moto;

	//상속받은 Bike class의 멤버
	Moto.PrintTire();
	cout << Moto.Price << endl;

	//Atv class 멤버
	Moto.PrintPrice();

	//함수 오버로딩
	Arithmatic Expression;
	Expression.Sum(10);
	Expression.Sum(9.44f);
		Expression.Sum(60, 70);

	//함수 오버 라이딩
	Moto.Print();

	//생성자가 명시적으로 선언됐을 때
	//자식 클래스 선언 : 명시적 선언
	Mobile Karl();

	Karl().PrintPrice();
}



 