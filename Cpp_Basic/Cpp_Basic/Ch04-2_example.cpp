#include "io.h"

void MultipleCal() {

    int LoopCount;
    int Value1, Value2;

    cout << "�ݺ� Ƚ���� �Է��ϼ���." << endl;
    cin >> LoopCount;

    for (int i = 0; i < LoopCount; i++) {
        cout << "�� ���� �Է����ּ���." << endl;
        cin >> Value1;
        cin >> Value2;
        cout << "��: " << Value1 + Value2 << endl;
    }
}

void Receipt() {

    int TotalPrice = 0;
    int Count = 0;
    int Price = 0;
    int Number = 0;
    int SumPrice = 0;

    cout << "���� �� �ݾ�: ";
    cin >> TotalPrice;
    cout << "������ ���� ��: "; //�ݺ�Ƚ��
    cin >> Count;

    for (int i = 1; i <= Count; i++) {

        cout << i << "�� ���� ���� :";
        cin >> Price;
        cout << i << "�� ���� ����: ";
        cin >> Number;
        cout << i << "�� ���� �Ѱ���: " << Price * Number << endl << endl;

        SumPrice += Price * Number;
    }
    if (TotalPrice == SumPrice) {
        cout << "Yes! �ùٸ� ����̾���." << endl;
    }
    else {
        cout << "No! ������ �¾Ҵ�." << endl;
    }

    cout << ((TotalPrice == SumPrice) ? "YES" : "NO") << endl;
}

void Star() {

    for (int i = 1; i <= 5; i++) {
        for (int k = 1; k <= (5 - i); k++) {
            cout << " ";
        }

        for (int n = 1; n <= i; n++) {
            cout << "*";
        }
        cout << endl;
    }
}

