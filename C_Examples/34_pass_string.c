#include <stdio.h>

void printString(char input[]);

int main (){

    char printThis[] = "Print This String";

    printString(printThis);

}

void printString(char input[]){
    printf("%s\n", input);
};