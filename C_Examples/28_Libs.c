#include <stdio.h>
#include <math.h>
#include <stdint.h>
#include <time.h>

int main(){
    //uint16_t myNumber = 3;

    //printf("%d\n", myNumber);

    //printf("%f\n", sqrt(myNumber));

    //printf("%f\n", sin(myNumber));

    //printf("%f\n", cos(myNumber));

    //printf("%f\n", exp(myNumber));

    //printf("%f\n", pow(myNumber, myNumber));


    time_t myTime;
    time_t otherTime;

    myTime = time(NULL);

    printf("%u\n", myTime);

    for(int i = 0; i < 10000; i++){
        printf("%d\n", i);
    }

    otherTime = time(NULL);

    printf("%u\n", otherTime - myTime);




}