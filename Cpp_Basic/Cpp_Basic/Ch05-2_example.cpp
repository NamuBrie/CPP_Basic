#include "io.h"

void BubbleSort() {

    int Number[10] = { 7,5,2,1,3,6,9,8,4,0 };
    int temp = 0;

    for (int n = 9; n > 0; n--) {
        for (int k = 0; k < n; k++) {

            //비교
            if (Number[k] > Number[k + 1]) {

                //교환(swap)
                temp = Number[k];
                Number[k] = Number[k + 1];
                Number[k + 1] = temp;

            }
        }
    }
    for (int i = 0; i < 10; i++) {
        cout << Number[i] << " : ";

    }

    cout << endl;
}