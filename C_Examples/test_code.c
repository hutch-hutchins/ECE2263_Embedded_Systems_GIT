#include <stdio.h>
#include <stdint.h>
#include <math.h>

#define PI 3.1415

double AreaSquare (double input);
void Circle (double input);

///Global Vars
double parCl;
double areaCl;


int main(){

    
    double inputLine;

    printf("Please input your number: \n");
    scanf("%lf", &inputLine);

    ///square

    double parSq = 4 * inputLine; ///inputLine + inputline ..... 
    double areaSq = AreaSquare(inputLine);

    ///circle
    Circle(inputLine);

    


    printf("The para. of your square is: %f\n", parSq);
    printf("The area of your square is: %f\n", areaSq);

    printf("The para. of your circle is: %f\n", parCl);
    printf("The area of your circle is: %f\n", areaCl);

    FILE *fp;

    fp = fopen("shape.txt", "a+");

    fprintf(fp, "The para. of your square is: %f\n", parSq);
    fprintf(fp, "The area of your square is: %f\n", areaSq);

    fprintf(fp, "The para. of your circle is: %f\n", parCl);
    fprintf(fp, "The area of your circle is: %f\n", areaCl);


    fclose(fp);




}

double AreaSquare (double input){
    double output;
    return output = pow(input, 2);  
}

void Circle (double input){
    parCl = input * PI;
    areaCl = PI * pow((input/2), 2);
}