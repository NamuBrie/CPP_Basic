#include "io.h"

void IndexChar() {
    int number = 0;
    char Word[20];
    cout << "원하는 단어를 입력해주세요! ";
    cin >> Word;

    //cout << Word;
    cout << "몇 번째 글자를 찾으실래요? ";
    cin >> number;
    cout << Word[number - 1];

}
/*
void AlphaNumber() {
    char Word[20];
    int WordSize = sizeof(Word) - 1;

    cout << "원하는 단어를 입력해주세요! ";
    cin >> Word;

    char Alpha[] = "abcdefghijklmnopqrstuvwxyz";
    int AlphaSize = sizeof(Alpha) - 1; // \0 자리 빼주기

    int Check[AlphaSize];
    for (int i = 0; i < AlphaSize; i++) {
        Check[i] = -1;
    }

    for (int i = 0; i < WordSize; i++) {
        for (int k = 0; k < AlphaSize; k++) {

            if (Word[i] == Alpha[k]) {
                if (Check[k] == -1) {
                    Check[k] = i;
                }
            }
        }
    }

    cout << WordSize << endl;
    cout << AlphaSize << endl;

    for (int i = 0; i < sizeof(Alpha) - 1; i++) {
        cout << Check[i] << " ";

    }
}

*/