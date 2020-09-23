#include <stdio.h>


int main(){
    FILE *fp = fopen("example.txt", "r");
    
    char c = '0';


    do{
        c = fgetc(fp);

        printf("%c", c);

    }while(c != EOF);

    fclose(fp);

}





