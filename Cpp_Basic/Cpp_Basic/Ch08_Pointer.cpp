#include "io.h"

void PointerDefine() {

	int a = 10;
	cout << "a : " << a << endl;
	cout << "&a : " << &a << endl; //&a: &(주소참조) 연산 , 주소 출력

	int* pa = &a; // 포인터 변수에 주소값 대입 , *:포인터를 의미

	cout << "pa : " << pa << endl; //주소 출력
	cout << "*pa : " << *pa << endl; //*:참조 연산자 , 그 주소에 있는 값 출력

	cout << "pa+1 : " << pa + 1 << endl;
	cout << "*pa+1 : " << *pa + 1 << endl;
	cout << "*(pa+1) : " << *(pa + 1) << endl;

	int** ppa = &pa; //포포인터,포인터를 참조하는 포인터
	cout << "ppa : " << ppa << endl;
	cout << "*paa : " << *ppa << endl;
	cout << "**paa : " << **ppa << endl;

	cout << endl;

	int Array[3] = { 1,8,13};
	int* pArray = Array; // Array가 주소라서 & 안 넣음

	cout << "Array : " << Array << endl; // 배열의 첫 번째 원소가 있는 주소
	cout << "pArray : " << pArray << endl;

	cout << "Array[1] : " << Array[1] << endl;
	cout << "pArray[1] : " << pArray[1] << endl; //Array = pArray

	cout << "*pArray : " << *pArray << endl;
	cout << "*Array : " << *Array << endl;

	cout << "Array+1 : " << Array + 1 << endl;
	cout << "pArray+1 : " << pArray + 1 << endl;

	cout << "*Array+1 : " << *Array + 1 << endl;
	cout << "*pArray+1 : " << *pArray + 1 << endl;
	
	cout << "*(Array+1) : " << *(Array + 1) << endl;
	cout << "*(pArray) : " << *(pArray + 1) << endl;

}