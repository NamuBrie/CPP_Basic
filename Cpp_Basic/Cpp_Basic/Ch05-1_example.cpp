﻿#include "io.h"

void CountNumber() {

    int Counter = 0;
    cout << "숫자 개수를 입력해주세요: ";
    cin >> Counter;

    //int Number[Counter]; - 정적선언
    int* pNumber = new int[Counter]; // - 동적선언
    for (int i = 0; i < Counter; i++) 
    {
        cout << "수 데이터를 입력해주세요: ";
        cin >> pNumber[i];
    }

    int FindNumber = 0;
    cout << "어떤 수의 갯수를 찾고싶수? ";
    cin >> FindNumber;

    int FindCount = 0;
    for (int i = 0; i < Counter; i++) 
    {
        if (pNumber[i] == FindNumber) 
        {
            FindCount++;
        }
    }

    cout << FindNumber << "는 " << FindCount << "개 입니다.";
}

void MiniNum() {

    int Counter = 0;
    cout << "숫자 개수를 입력해주세요: ";
    cin >> Counter;

    int FindNumber = 0;
    cout << "기준이 되는 수를 입력해주세요: ";
    cin >> FindNumber;

    
    //int Number[Counter];
    int* pNumber = new int[Counter];
    for (int i = 0; i < Counter; i++) 
    {
        cout << "수 데이터를 입력해주세요: ";
        cin >> pNumber[i];
    }

    for (int i = 0; i < Counter; i++) 
    {
        if (FindNumber > pNumber[i]) 
        {
            cout << pNumber[i] << " : ";
        }
    }
}

void MissingNumber() 
{

    int Counter = 0;
    cout << "전체 학생 수를 입력해주세요: ";
    cin >> Counter;

    int FindNumber = 0;
    cout << "과제 안 낸 학생 수: ";
    cin >> FindNumber;

    //전체 학생의 번호 데이터 set 초기화
    //int TotalMember[Counter]; //배열변수 선언시 크기 인덱스틑 변수로 지정할 수 없음
    //C++ 컴파일 언어=> 컴파일하는 시간에 배열 크기가 결정 => 크기를 변수로 지정하면 크기를 지정할 수 없음
    int* pTotalMember = new int[Counter];

    for (int i = 0; i < Counter; i++) 
    {
        pTotalMember[i] = i + 1;
    }

    //과제 제출한 학생 번호를 set
    //int WorkMember[Counter - FindNumber];
    int* pWorkMember = new int[Counter - FindNumber];
    for (int i = 0; i < (Counter - FindNumber); i++) 
    {

        cin >> pWorkMember[i];

    }

    //제출 확인용 배열변수 set
    //bool Check[Counter];
    bool* pCheck = new bool[Counter];
    for (int i = 0; i < Counter; i++) 
    {
        pCheck[i] = false;
    }

    //제출한 학생, 미제출 학생 구분 - true/false
    for (int i = 0; i < (Counter - FindNumber); i++) 
    {
        for (int k = 0; k < Counter; k++) 
        {
            if (pWorkMember[i] == pTotalMember[k]) 
            {
                pCheck[k] = true;
                //cout << WorkMember[i] << endl;
            }
        }
    }

    //미제출 학생 번호 추출
    for (int i = 0; i < Counter; i++) 
    {
        if (pCheck[i] == false) 
        {



            cout << i + 1 << "번 안냄" << endl;
        }
    }
}

