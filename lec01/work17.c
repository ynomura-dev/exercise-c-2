#include <stdio.h>
#include <stdlib.h>

int main(void){
    char *s1 = "2026";
    char *s2 = "3.14159";

    printf("s1  -> %d\n", atoi(s1));    //%d...decimal
    printf("s2  -> %f\n", atof(s2));    //%f...float

    //ascii to int/float -> ato(i/f)

    printf("s1+100  -> %d\n", atoi(s1) + 100);
    printf("s1+s2   -> %f\n", atoi(s1) + atof(s2));

    return 0;
}