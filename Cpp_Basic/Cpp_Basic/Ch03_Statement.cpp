#include "io.h"


void IfStatement() {

    // if
    int Total = 50;
    //������ 60�̻��̸� �հ� ���
    if (Total >= 60) {
        cout << "�հ�" << endl;
    }
    //�ƴϸ� ���հ�
    else {
        cout << "���հ�" << endl;
    }

    int Total3 = 85;
    if (Total3 >= 90) {
        cout << "soo" << endl;
    }
    else if (Total3 >= 80) {
        cout << "woo" << endl;
    }
    else {
        cout << "restart" << endl;
    }
}

void IfElseStatement() {

    // 3���� ��������� 60�̻��̸� �հ�, �ƴϸ� ���հ�
    //�� ����� ������ 60�̸��̸� ����

    int Subject1 = 0;
    int Subject2 = 0;
    int Subject3 = 0;

    cout << "���� 1�� ������ �Է��Ͻʽÿ� : ";
    cin >> Subject1;

    cout << "���� 2�� ������ �Է��Ͻʽÿ� : ";
    cin >> Subject2;

    cout << "���� 3�� ������ �Է��Ͻʽÿ� : ";
    cin >> Subject3;

    int Average = (Subject1 + Subject2 + Subject3) / 3;

    //���, ����� ���� ��� 60�̻��̸� �հ�
    if (Average >= 60 && Subject1 >= 60 && Subject2 >= 60 && Subject3 >= 60) {
        cout << "Pass" << endl;

    }
    else {
        cout << "Fail" << endl;
    }

    int SubjectNumber = 0;

    if (SubjectNumber == 1) {
        cout << "C++" << endl;
    }
    else if (SubjectNumber == 2) {
        cout << "UE" << endl;
    }
    else if (SubjectNumber == 3) {
        cout << "VR" << endl;
    }
    else {
        cout << "Please check the number!" << endl;
    }
}

void SwitchStatement() {

    //�����ȣ: 1-C++, 2-�𸮾���, 3-VR

    int SubjectNumber = 0;
    cout << "insert the number of Subject : ";
    cin >> SubjectNumber;

    switch (SubjectNumber) {

    case 1:
        cout << "C++" << endl;
        break;
    case 2:
        cout << "UE" << endl;
        break;
    case 3:
        cout << "VR" << endl;
        break;
    default:
        cout << "Please, check the number." << endl;
    }
}

void NestedStatement() {

    int a = 10;
    int b = 20;
    int c = 30;

    if (a < b) {
        if (b < c) {
            cout << "��ø IF" << endl;
        }
    }

    if (a < b && b < c) {
        cout << "AND ���� IF" << endl;
    }
}

void ForStatement() {

    // integer, iterate(iterable) : �ݺ��ϴ�
    for (int i = 0; i < 10; i++) {
        // cout << i << endl;
    }

    int StepSum = 0;
    for (int i = 1; i <= 10; i++) {
        StepSum = StepSum + i;

        cout << StepSum << " : ";
    }

    cout << endl;

    int StepSum2 = 0;
    for (int i = 1; i <= 10; i += 2) {
        StepSum2 = StepSum2 + i;

        cout << StepSum2 << " : ";
    }

    cout << endl;

    for (int i = 1; i <= 9; i++) {
        cout << 2 * i << " : ";
    }

    cout << endl;
    cout << endl;

    for (int i = 2; i <= 9; i++) {
        for (int k = 1; k <= 9; k++) {

            cout << i * k << " : ";
        }
        cout << endl;
    }
}

void WhileStatement() {

    int LoopNumber = 0;
    while (LoopNumber <= 10) {

        cout << LoopNumber << " : ";

        LoopNumber++;
    }

    cout << endl;

    int IdNumber = 123456;
    int InputId = 0;

    while (true) {

        cout << "log in : ";
        cin >> InputId;

        if (InputId == IdNumber) {
            cout << "login success" << endl;
            break;
        }
        else {
            cout << "try again" << endl;
        }
    }
}

int GuGuDan(int Sootja) {

    int Result = 0;

    for (int i = 1; i <= 9; i++) {

        // cout << 2 * i << " : ";
        Result += Sootja * i;
    }
    return Result;
}


//�������� (Global Scope)
int GlobalValue = 10;

void VarScope(int Number) {

    int FunctionValue = 20;

    if (true) {

        int BlockValue = 30;
        cout << "�������� ��: " << GlobalValue << endl;
        cout << "�Լ��������� ��: " << FunctionValue << endl;
        cout << "��Ϻ��� ��: " << BlockValue << endl;
        cout << "�Ķ���� ��: " << Number << endl;
    }

    cout << "�������� ��: " << GlobalValue << endl;
    cout << "�Լ��������� ��: " << FunctionValue << endl;
    // cout << "��Ϻ��� ��: " << BlockValue << endl;
    cout << "�Ķ���� ��: " << Number << endl;
}