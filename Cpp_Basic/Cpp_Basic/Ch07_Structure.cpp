#include "io.h"

void Structure() {

    //구조체 서술 정의
    struct inflatable { //inflatable: 데이터 타입 선언

        char name[20];
        float volume;
        double price;

    };

    inflatable People = { "Tom", 0.75, 15.235 }; //피플이 변수 이름

    struct sesac { //데이터 타입 선언
        //멤버변수
        char name[20];
        char address[100];
        char phone[18];
        int age;
    };

    sesac Banjang;
    Banjang = { "Jane", "Seoul" , "01012345678" , 25 };

    Banjang.age = 30;
}

void Enum() {

    //열거형 데이터 타입
    //Sun, Mon, ... : 열거형 상수
    // 0부터 시작하는 양수를 열거형 상수의 값으로 할당

    enum days { Sun, Mon, Tue, Wed = 10, Thu, Fri, Sat }; // 넣어준 값을 기준으로 뒤에도 영향 끼침
    days Dayname;
    Dayname = Mon;
    cout << Dayname << endl;

    switch (Dayname) {
    case Sun:
        cout << "짜파게티 먹는 날";
    case Mon:
        cout << "SeSac";
    case Tue:
        cout << "Angry";
    case Wed:
        cout << "Water";
    case Thu:
        cout << "Hello Trees";
    case Fri:
        cout << "Gold is mine";
    case Sat:
        cout << "Happy";
    }
}
void ChangeValue(int a)
{
    a = 0;
}

int ChangeValue2() {
    return 0;
}

int c = 10;

void CallByValue() {

    //ChangeValue(c);
    c = ChangeValue2();
}