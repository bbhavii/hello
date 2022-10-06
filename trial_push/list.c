#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv ){
    
    int *a;
    int y = &a;
    printf("the address is: %d", y);
    return 0;
}