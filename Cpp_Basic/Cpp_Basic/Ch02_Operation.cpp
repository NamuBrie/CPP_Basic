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

    //���� ����
    int Increase = 0; //�ʱ�ȭ
    int Decrease = 10;

    Increase = Increase + 1; // �������� ��: ������(Step)
    Decrease = Decrease - 2;

    cout << Increase << endl << Decrease << endl;

    Increase += 1;
    Decrease -= 2;

    cout << Increase << endl << Decrease << endl;

    // Count : ���� -1�� ����, ����
    Increase++;
    Decrease--;

    cout << Increase << endl << Decrease << endl;
}

void OperationCondition() {

    // �� ������ ��� �� : ��/����, true/false, 1/0
    int Greater = 30;
    int Less = 10;

    cout << (Greater > Less) << endl; // > : greater than
    cout << (Greater < Less) << endl; // < : less than

    cout << (Greater >= Less) << endl; // =�� �׻� �����ʿ�
    cout << (Greater >= Less) << endl;

    cout << (Greater == Less) << endl;
    cout << (Greater != Less) << endl;
}

void OperationLogic() {

    //�� ����
    // AND : bool ���� ��� true�̸� ����� true, �ϳ��� false�̸� ����� false

    cout << (true && true) << endl;
    cout << (true && false) << endl;

    // OR : bool ���� ��� false�̸� ����� false, �ϳ��� true�̸� ����� true

    cout << (true || true) << endl;
    cout << (true || false) << endl;

    //��� 90�̻��̰� ��� 90�̻��̸�~
    int Kor = 80;
    int Eng = 95;

    cout << (Kor >= 90 && Eng >= 90) << endl;
    cout << (false && true) << endl;
    cout << (false) << endl;
}

void OperationBits() {

    //��Ʈ ����
    int Bit1 = 15; // 00000000 00000000 00000000 00001111
    int Bit2 = 20; // 00000000 00000000 00000000 00010100

    int BitAnd = Bit1 & Bit2;
    // 00001111
    //   00010100
    //   00000100
    cout << BitAnd << endl;

    // 15 ���� ���� ��Ʈ �̵� ����
    cout << (Bit1 << 1) << endl;
    // 00001111
    // 00011110
}

void OperationThree() {

    //���� ����
    cout << (3 > 5 ? "�����̴�" : "�ٺ���") << endl;
    cout << (3 < 5 ? "�����̴�" : "�ٺ���") << endl;
}