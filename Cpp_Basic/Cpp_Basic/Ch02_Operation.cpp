#include "io.h"

void OperationArithmetic(int Arith1, int Arith2) {

    // int Arith1 = 10;
    // int Arith2 = 20;

    int Sum = Arith1 + Arith2;
    int Sub = Arith1 - Arith2;
    int Mul = Arith1 * Arith2;
    int Div = Arith1 / Arith2;
    int Rest = Arith1 % Arith2;

    cout << Sum << endl
        << Sub << endl
        << Mul << endl
        << Div << endl
        << Rest << endl;
}

void OperationInDecreasment() {

    //증감 연산
    int Increase = 0; //초기화
    int Decrease = 10;

    Increase = Increase + 1; // 더해지는 값: 증감값(Step)
    Decrease = Decrease - 2;

    cout << Increase << endl << Decrease << endl;

    Increase += 1;
    Decrease -= 2;

    cout << Increase << endl << Decrease << endl;

    // Count : 갯수 -1씩 증가, 감소
    Increase++;
    Decrease--;

    cout << Increase << endl << Decrease << endl;
}

void OperationCondition() {

    // 비교 연산의 결과 값 : 참/거짓, true/false, 1/0
    int Greater = 30;
    int Less = 10;

    cout << (Greater > Less) << endl; // > : greater than
    cout << (Greater < Less) << endl; // < : less than

    cout << (Greater >= Less) << endl; // =은 항상 오른쪽에
    cout << (Greater >= Less) << endl;

    cout << (Greater == Less) << endl;
    cout << (Greater != Less) << endl;
}

void OperationLogic() {

    //논리 연산
    // AND : bool 값이 모두 true이면 결과는 true, 하나라도 false이면 결과는 false

    cout << (true && true) << endl;
    cout << (true && false) << endl;

    // OR : bool 값이 모두 false이면 결과는 false, 하나라도 true이면 결과는 true

    cout << (true || true) << endl;
    cout << (true || false) << endl;

    //국어가 90이상이고 영어가 90이상이면~
    int Kor = 80;
    int Eng = 95;

    cout << (Kor >= 90 && Eng >= 90) << endl;
    cout << (false && true) << endl;
    cout << (false) << endl;
}

void OperationBits() {

    //비트 연산
    int Bit1 = 15; // 00000000 00000000 00000000 00001111
    int Bit2 = 20; // 00000000 00000000 00000000 00010100

    int BitAnd = Bit1 & Bit2;
    // 00001111
    //   00010100
    //   00000100
    cout << BitAnd << endl;

    // 15 숫자 값을 비트 이동 연산
    cout << (Bit1 << 1) << endl;
    // 00001111
    // 00011110
}

void OperationThree() {

    //삼항 연산
    cout << (3 > 5 ? "정답이다" : "바보야") << endl;
    cout << (3 < 5 ? "정답이다" : "바보야") << endl;
}