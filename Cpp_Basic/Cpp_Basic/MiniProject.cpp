#include "io.h"

void BallInsert() {
	int BasketCount;
	cout << "How many Basket do you have? ";
	cin >> BasketCount;

	int InsertCount;
	cout << "Opportunities? ";
	cin >> InsertCount;

	int* pBasket = new int[BasketCount];
	for (int i = 0; i < BasketCount; i ++) {
		pBasket[i] = 0;
	}

	int StartBasketNumber, EndBasketNumber, BallNumber;


	for (int i = 0; i < InsertCount; i++) {

		cout << "insert start Baket : ";
		cin >> StartBasketNumber;
		cout << "insert end Basket : ";
		cin >> EndBasketNumber;
		cout << "Ball Number : ";
		cin >> BallNumber;

		for (int k = StartBasketNumber-1; k <= EndBasketNumber-1; k++) {
			pBasket[k] = BallNumber;
		}
	}

	for (int i = 0; i < BasketCount; i++) {
		cout << pBasket[i] << ":";
	}

	cout << endl;

}

void BallSwap() {

	int BasketCount;
	cout << "How many Basket do you have? ";
	cin >> BasketCount;

	int InsertCount;
	cout << "Change balls Opportunities? ";
	cin >> InsertCount;

	int* pBasket = new int[BasketCount];
	for (int i = 0; i < BasketCount; i++) {
		pBasket[i] = i+1;
	}

	int FirstBasketNumber, SecondBasketNumber, temp;


	for (int i = 0; i < InsertCount; i++) {

		cout << "insert first Baket : ";
		cin >> FirstBasketNumber;
		cout << "insert second Basket : ";
		cin >> SecondBasketNumber;

		temp = pBasket[FirstBasketNumber-1];
		pBasket[FirstBasketNumber-1] = pBasket[SecondBasketNumber-1];
		pBasket[SecondBasketNumber-1] = temp;
		
	}

	for (int i = 0; i < BasketCount; i++) {
		cout << pBasket[i] << ":";
	}

	cout << endl;

}

void MinMaxNum() {

	int Number;
	cout << "How many Number";
	cin >> Number;
	
	int* pNumber = new int[Number];

	int temp;

	for (int i = 0; i < Number; i++) {

		cout << "insert Number : ";
		cin >> pNumber[i];

	}

	for (int i = Number - 1; i > 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			if (pNumber[j] > pNumber[j + 1])
			{
				// swap
				temp = pNumber[j];
				pNumber[j] = pNumber[j + 1];
				pNumber[j + 1] = temp;
			}
		}
	}

	cout << pNumber[0] << "&" << pNumber[Number - 1];

	cout << endl;

}