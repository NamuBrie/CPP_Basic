#include "io.h"


void IfStatement() {

    // if
    int Total = 50;
    //총점이 60이상이면 합격 출력
    if (Total >= 60) {
        cout << "합격" << endl;
    }
    //아니면 불합격
    else {
        cout << "불합격" << endl;
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

    // 3과목 평균점수가 60이상이면 합격, 아니면 불합격
    //각 과목당 점수가 60미만이면 과락

    int Subject1 = 0;
    int Subject2 = 0;
    int Subject3 = 0;

    cout << "과목 1의 점수를 입력하십시오 : ";
    cin >> Subject1;

    cout << "과목 2의 점수를 입력하십시오 : ";
    cin >> Subject2;

    cout << "과목 3의 점수를 입력하십시오 : ";
    cin >> Subject3;

    int Average = (Subject1 + Subject2 + Subject3) / 3;

    //평균, 과목당 점수 모두 60이상이면 합격
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

    //과목번호: 1-C++, 2-언리얼엔진, 3-VR

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
            cout << "중첩 IF" << endl;
        }
    }

    if (a < b && b < c) {
        cout << "AND 연산 IF" << endl;
    }
}

void ForStatement() {

    // integer, iterate(iterable) : 반복하다
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


//전역변수 (Global Scope)
int GlobalValue = 10;

void VarScope(int Number) {

    int FunctionValue = 20;

    if (true) {

        int BlockValue = 30;
        cout << "전역변수 값: " << GlobalValue << endl;
        cout << "함수지역변수 값: " << FunctionValue << endl;
        cout << "블록변수 값: " << BlockValue << endl;
        cout << "파라미터 값: " << Number << endl;
    }

    cout << "전역변수 값: " << GlobalValue << endl;
    cout << "함수지역변수 값: " << FunctionValue << endl;
    // cout << "블록변수 값: " << BlockValue << endl;
    cout << "파라미터 값: " << Number << endl;
}