#include "io.h"



void OvenTimer2() {

    //�ð� a
    //�� b + c % 60
    // a + (c / 60)

    int a, b, c;

    //�Է� ���� ���� ���ؼ� �ð� �����ȿ� ���ԵǴ��� ���� �Ǵ�
    //������ ����� ���� �ԷµǸ� �޼����� ����ϰ� �ٽ� �Է� ����
    while (true) {

        cout << "����ð��� ��: ";
        cin >> a;

        if (a >= 0 && a <= 23) {
            break;
        }

        else {
            cout << "�߸� �Է��ϼ̽��ϴ�." << endl;
        }
    }

    while (true) {

        cout << "����ð��� ��: ";
        cin >> b;

        if (b >= 0 && b <= 59) {
            break;
        }

        else {
            cout << "�߸� �Է��ϼ̽��ϴ�." << endl;
        }
    }

    while (true) {

        cout << "�丮�� �ɸ��� �ð�: ";
        cin >> c;

        if (c >= 0 && c <= 1000) {
            break;
        }

        else {
            cout << "�߸� �Է��ϼ̽��ϴ�." << endl;
        }
    }



    //���� �ð��� �а� �丮 �ð��� �� ���� ������ �� 60�� �Ѿ�� �ð� �ϳ� ����
    //�� ���� 60���� ������ ������ ���

    if (b + c < 60) {
        cout << "�丮 �ϼ� �ð��� " << a << "�� " << b + c << "�� �Դϴ�.";

    }

    else if (b + c > 59 && (a + ((b + c) / 60)) > 23) {

        cout << "�丮 �ϼ� �ð��� " << (a + ((b + c) / 60)) % 24 << "�� "
            << (b + c) % 60 << "�� �Դϴ�.";

    }

    else {

        cout << "�丮 �ϼ� �ð��� " << a + ((b + c) / 60) << "�� " << (b + c) % 60
            << "�� �Դϴ�.";
    }
}

void OvenTimer() {

    //�ð� a
    //�� b + c % 60
    // a + (c / 60)

    int a, b, c;

    //�Է� ���� ���� ���ؼ� �ð� �����ȿ� ���ԵǴ��� ���� �Ǵ�
    //������ ����� ���� �ԷµǸ� �޼����� ����ϰ� �ٽ� �Է� ����

    cout << "����ð��� ��: " << endl;
    cin >> a;
    cout << "����ð��� ��: " << endl;
    cin >> b;
    cout << "�丮�� �ɸ��� �ð�: " << endl;
    cin >> c;



    //���� �ð��� �а� �丮 �ð��� �� ���� ������ �� 60�� �Ѿ�� �ð� �ϳ� ����
    //�� ���� 60���� ������ ������ ���

    if (b + c < 60) {
        cout << "�丮 �ϼ� �ð��� " << a << "�� " << b + c << "�� �Դϴ�.";

    }

    else if (b + c > 59 && (a + ((b + c) / 60)) > 23) {

        cout << "�丮 �ϼ� �ð��� " << a + ((b + c) / 60) - 24 << "�� "
            << (b + c) % 60 << "�� �Դϴ�.";

    }

    else {

        cout << "�丮 �ϼ� �ð��� " << a + ((b + c) / 60) << "�� " << (b + c) % 60
            << "�� �Դϴ�.";
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


    // ������ �־����� ��, �����̸� 1, �ƴϸ� 0�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

    // ������ ������ 4�� ����̸鼭, 100�� ����� �ƴ� �� �Ǵ� 400�� ����� ���̴�.

    // ���� ���, 2012���� 4�� ����̸鼭 100�� ����� �ƴ϶� �����̴�. 1900����
    // 100�� ����̰� 400�� ����� �ƴϱ� ������ ������ �ƴϴ�. ������, 2000���� 400��
    // ����̱� ������ �����̴�.


      // Year % 4 == 0 : 4�� ���
      // Year % 100 != 0 : 100�� ����� �ƴϴ�
      // (Year % 4 == 0) && (Year % 100 != 0)

      // Year % 400 == 0 : 400�� ���

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
