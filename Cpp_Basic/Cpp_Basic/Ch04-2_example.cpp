#include "io.h"

void MultipleCal() {

    int LoopCount;
    int Value1, Value2;

    cout << "반복 횟수를 입력하세요." << endl;
    cin >> LoopCount;

    for (int i = 0; i < LoopCount; i++) {
        cout << "두 수를 입력해주세요." << endl;
        cin >> Value1;
        cin >> Value2;
        cout << "합: " << Value1 + Value2 << endl;
    }
}

void Receipt() {

    int TotalPrice = 0;
    int Count = 0;
    int Price = 0;
    int Number = 0;
    int SumPrice = 0;

    cout << "구입 총 금액: ";
    cin >> TotalPrice;
    cout << "물건의 종류 수: "; //반복횟수
    cin >> Count;

    for (int i = 1; i <= Count; i++) {

        cout << i << "번 물건 가격 :";
        cin >> Price;
        cout << i << "번 물건 갯수: ";
        cin >> Number;
        cout << i << "번 물건 총가격: " << Price * Number << endl << endl;

        SumPrice += Price * Number;
    }
    if (TotalPrice == SumPrice) {
        cout << "Yes! 올바른 계산이었다." << endl;
    }
    else {
        cout << "No! 눈탱이 맞았다." << endl;
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

