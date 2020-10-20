#include <stdio.h>
#include <stdint.h>

uint32_t arrayToNumber(char * inputArray[]);

int main(){

uint32_t number = 0;

char arrayNumber[] = {'1', '2', '3', '4', '5'};


number = arrayToNumber(arrayNumber);

printf("number %d\n", number);



}


uint32_t arrayToNumber(char inputArray[]){
    return ((inputArray[0] - 0x30) * 10000) + ((inputArray[1] - 0x30) * 1000) + ((inputArray[2] - 0x30) * 100) + ((inputArray[3] - 0x30) * 10) + ((inputArray[4] - 0x30));
}




