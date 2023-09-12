#include "io.h"

void Variable() {

	int Value1 = 100;
	Value1 = 200;

	const int Value2 = 50;
	// Value2 = 100;
}

void VariableTypeNumber() {

	//정수형 데이터 타입
	short Num1 = 10; // 2^16
	int Num2 = 20;   // 2^32 //integer
	long Num3 = 30;  // 2^64

	cout << Num1 << Num2 << Num3 << endl;

	//실수형 데이터 종류
	float Num4 = 1.1;
	float Num41 = 1.345f;
	double Num5 = 1.5;

	cout << Num4 << endl << Num5 << endl << Num41 << endl;
}

void VariableTypeCharacter() {

	//문자형 테이터 (문자 1개 : '' / 문자 여러개 : "")
	char Text1; // char : character (문자 하나만 저장 가능)
	char Text2;

	Text1 = 'A';
	Text2 = 'B';

	cout << Text1 << endl << Text2 << endl;
}

void VariableTypeBool() {

	bool Condition;

	Condition = true;
	cout << Condition << endl;

	Condition = false;
	cout << Condition << endl;

	// 0 => false, 그외 정수 => true
	Condition = 10;
	cout << Condition << endl;

	Condition = -20;
	cout << Condition << endl;
}

void InputOutput() {

	int number;
	//외부입력
	cin >> number;
	cout << number << endl;
}