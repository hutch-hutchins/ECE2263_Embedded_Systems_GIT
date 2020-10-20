#include <stdio.h>
#include <stdlib.h>

int main() {
    int numberArray[120];// = {77, 21, 3, 12, 43, 64, 100, 78, 22, 93};
    int sizeOfNumbers = sizeof(numberArray) / sizeof(numberArray[0]);

    srand(0);

    for (int l = 0; l < sizeOfNumbers; l++) {
        numberArray[l] = rand() % 6;
    }

    for(int i; i < sizeOfNumbers; i++){
        printf("%d\n", numberArray[i]+1);
    }

    return 0;
}
