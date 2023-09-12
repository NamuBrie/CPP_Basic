#include "io.h"

void DefineArray() {

    //int Num = 0;

    //선언, declare(define)
    int a[3] = { 1,1,1 };
    int b[10] = { 1,2 };
    //int c[3] = {1,2,3,4}; => Syntax Error
    int d[3];

    //대입 => 접근, acess
    //d[3]={1,2,3};
    d[0] = 1;
    d[1] = 2;
    d[2] = 3;

    for (int i = 0; i < 5; i++) {
        d[i] = i + 1;
    }

    //출력 => 접근, Acess
    cout << endl;

    for (int i = 0; i < 3; i++) {
        cout << a[i] << " ";
    }

    cout << endl;

    //배역 개수 10개, 13번 반복 출력 => 10개범위넘어서는 부분은 쓰레기 값이 출력됨
    for (int i = 0; i < 13; i++) {
        cout << b[i] << " ";

    }

    cout << endl;
    for (int i = 0; i < 5; i++) {
        cout << d[i] << " : ";
    }
    cout << endl;

}

void TwoDimension() {
    int Number[5][2] = { // [행][열]
    {1,2},
    {3,4},
    {5,6},
    {7,8},
    {9,0}
    };

    cout << Number[0][0];

    for (int i = 0; i < 5; i++) {
        for (int k = 0; k < 2; k++) {
            cout << Number[i][k] << endl;
        }
    }

}