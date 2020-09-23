#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define n 2048
double a[n][n];
double b[n][n];
double c[n][n];

clock_t start, end;
double cpu_time_used;


int main(int argc, const char *arg[]){
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            a[i][j] = (double)rand() / (double)RAND_MAX;
            b[i][j] = (double)rand() / (double)RAND_MAX;
            c[i][j] = 0;
        }
    }

    start = clock();

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            for(int k = 0; k < n; ++k){
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    end = clock();

    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;

    printf("%0.6f\n", cpu_time_used);
    return 0;
}