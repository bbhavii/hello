#include <stdio.h>
int main(int argc, char **argv){

    int x = 1;
    int y = 2;

    printf("x = %d, y= %d\n", x, y);

    char *s = "abcd";

    printf("the char *(s+1) is \"%c\".\n", *(s+1));
    printf("the string s is \"%s\".\n", s);
    return 0;

    
}
