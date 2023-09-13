#include "io.h"



void OvenTimer2() {

    //시간 a
    //분 b + c % 60
    // a + (c / 60)

    int a, b, c;

    //입력 받은 값에 대해서 시간 범위안에 포함되는지 여부 판단
    //범위를 벗어나는 값이 입력되면 메세지를 출력하고 다시 입력 받음
    while (true) {

        cout << "현재시각의 시: ";
        cin >> a;

        if (a >= 0 && a <= 23) {
            break;
        }

        else {
            cout << "잘못 입력하셨습니다." << endl;
        }
    }

    while (true) {

        cout << "현재시각의 분: ";
        cin >> b;

        if (b >= 0 && b <= 59) {
            break;
        }

        else {
            cout << "잘못 입력하셨습니다." << endl;
        }
    }

    while (true) {

        cout << "요리에 걸리는 시간: ";
        cin >> c;

        if (c >= 0 && c <= 1000) {
            break;
        }

        else {
            cout << "잘못 입력하셨습니다." << endl;
        }
    }



    //시작 시간의 분과 요리 시간의 분 값을 더했을 때 60이 넘어가는 시가 하나 증가
    //분 값은 60으로 나눠서 나머지 출력

    if (b + c < 60) {
        cout << "요리 완성 시각은 " << a << "시 " << b + c << "분 입니다.";

    }

    else if (b + c > 59 && (a + ((b + c) / 60)) > 23) {

        cout << "요리 완성 시각은 " << (a + ((b + c) / 60)) % 24 << "시 "
            << (b + c) % 60 << "분 입니다.";

    }

    else {

        cout << "요리 완성 시각은 " << a + ((b + c) / 60) << "시 " << (b + c) % 60
            << "분 입니다.";
    }
}

void OvenTimer() {

    //시간 a
    //분 b + c % 60
    // a + (c / 60)

    int a, b, c;

    //입력 받은 값에 대해서 시간 범위안에 포함되는지 여부 판단
    //범위를 벗어나는 값이 입력되면 메세지를 출력하고 다시 입력 받음

    cout << "현재시각의 시: " << endl;
    cin >> a;
    cout << "현재시각의 분: " << endl;
    cin >> b;
    cout << "요리에 걸리는 시간: " << endl;
    cin >> c;



    //시작 시간의 분과 요리 시간의 분 값을 더했을 때 60이 넘어가는 시가 하나 증가
    //분 값은 60으로 나눠서 나머지 출력

    if (b + c < 60) {
        cout << "요리 완성 시각은 " << a << "시 " << b + c << "분 입니다.";

    }

    else if (b + c > 59 && (a + ((b + c) / 60)) > 23) {

        cout << "요리 완성 시각은 " << a + ((b + c) / 60) - 24 << "시 "
            << (b + c) % 60 << "분 입니다.";

    }

    else {

        cout << "요리 완성 시각은 " << a + ((b + c) / 60) << "시 " << (b + c) % 60
            << "분 입니다.";
    }
}

void Quadrant() {

    int x;
    int y;

    cout << "insert x value : ";
    cin >> x;

    cout << "insert y value : ";
    cin >> y;

    if (x > 0 && y > 0) {
        cout << "Quadrant 1" << endl;
    }
    else if (x < 0 && y > 0) {
        cout << "Quadrant 2" << endl;
    }
    else if (x < 0 && y < 0) {

        cout << "Quadrant 3" << endl;
    }
    else if (x > 0 && y < 0) {
        cout << "Quadrant 4" << endl;
    }
    else {
        cout << "starting point or on the line" << endl;
    }
}

void LeapYear() {

    int Year;
    cout << "insert the year" << endl;
    cin >> Year;


    // 연도가 주어졌을 때, 윤년이면 1, 아니면 0을 출력하는 프로그램을 작성하시오.

    // 윤년은 연도가 4의 배수이면서, 100의 배수가 아닐 때 또는 400의 배수일 때이다.

    // 예를 들어, 2012년은 4의 배수이면서 100의 배수가 아니라서 윤년이다. 1900년은
    // 100의 배수이고 400의 배수는 아니기 때문에 윤년이 아니다. 하지만, 2000년은 400의
    // 배수이기 때문에 윤년이다.


      // Year % 4 == 0 : 4의 배수
      // Year % 100 != 0 : 100의 배수가 아니다
      // (Year % 4 == 0) && (Year % 100 != 0)

      // Year % 400 == 0 : 400의 배수

      //( (Year % 4 == 0) && (Year % 100 != 0) ) || Year % 400 == 0

    if (((Year % 4 == 0) && (Year % 100 != 0)) || Year % 400 == 0) {
        cout << "Leap Year" << endl;
    }
    else {
        cout << "Nomal Year" << endl;
    }
}

void SizeComparison() {

    int Value1 = 0;
    int Value2 = 0;

    cout << "insert first value.";
    cin >> Value1;
    cout << "insert second value.";
    cin >> Value2;

    if (Value1 > Value2) {
        cout << ">" << endl;
    }
    else if (Value1 < Value2) {
        cout << "<" << endl;
    }
    else {
        cout << "==" << endl;
    }
}
