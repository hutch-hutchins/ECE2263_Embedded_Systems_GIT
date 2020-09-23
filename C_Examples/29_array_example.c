#include <stdio.h>
#include <stdlib.h>

int main() {
    int numberArray[100];// = {77, 21, 3, 12, 43, 64, 100, 78, 22, 93};
    int sizeOfNumbers = sizeof(numberArray) / sizeof(numberArray[0]);

    srand(0);

    for (int l = 0; l < 100; l++) {
        numberArray[l] = rand();
    }

    for(int i; i < sizeOfNumbers; i++){
        printf("%d\n", numberArray[i]);
    }

    return 0;
}
