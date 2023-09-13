#include "io.h"

void PointerDefine() {

	int a = 10;
	cout << "a : " << a << endl;
	cout << "&a : " << &a << endl; //&a: &(�ּ�����) ���� , �ּ� ���

	int* pa = &a; // ������ ������ �ּҰ� ���� , *:�����͸� �ǹ�

	cout << "pa : " << pa << endl; //�ּ� ���
	cout << "*pa : " << *pa << endl; //*:���� ������ , �� �ּҿ� �ִ� �� ���

	cout << "pa+1 : " << pa + 1 << endl;
	cout << "*pa+1 : " << *pa + 1 << endl;
	cout << "*(pa+1) : " << *(pa + 1) << endl;

	int** ppa = &pa; //��������,�����͸� �����ϴ� ������
	cout << "ppa : " << ppa << endl;
	cout << "*paa : " << *ppa << endl;
	cout << "**paa : " << **ppa << endl;

	cout << endl;

	int Array[3] = { 1,8,13};
	int* pArray = Array; // Array�� �ּҶ� & �� ����

	cout << "Array : " << Array << endl; // �迭�� ù ��° ���Ұ� �ִ� �ּ�
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