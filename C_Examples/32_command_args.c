#include <stdio.h>

int main( int argc, char *argv[] )  {

    if( argc == 2 ) {
        printf("arg is %s\n", argv[1]);
    }
    else if( argc > 2 ) {
        printf("too many args\n");
    }
    else {
        printf("arg expected\n");
    }
}