#include "io.h"

void Variable() {

	int Value1 = 100;
	Value1 = 200;

	const int Value2 = 50;
	// Value2 = 100;
}

void VariableTypeNumber() {

	//������ ������ Ÿ��
	short Num1 = 10; // 2^16
	int Num2 = 20;   // 2^32 //integer
	long Num3 = 30;  // 2^64

	cout << Num1 << Num2 << Num3 << endl;

	//�Ǽ��� ������ ����
	float Num4 = 1.1;
	float Num41 = 1.345f;
	double Num5 = 1.5;

	cout << Num4 << endl << Num5 << endl << Num41 << endl;
}

void VariableTypeCharacter() {

	//������ ������ (���� 1�� : '' / ���� ������ : "")
	char Text1; // char : character (���� �ϳ��� ���� ����)
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

	// 0 => false, �׿� ���� => true
	Condition = 10;
	cout << Condition << endl;

	Condition = -20;
	cout << Condition << endl;
}

void InputOutput() {

	int number;
	//�ܺ��Է�
	cin >> number;
	cout << number << endl;
}