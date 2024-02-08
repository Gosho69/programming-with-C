#include <stdio.h>
#define MACRO(a,b)int greater = a>b?a:b;
int main(){
    int a = 5;
    int b = 6;
    MACRO(a,b)
    printf("The greater num is %d",greater);
    return 0;
}