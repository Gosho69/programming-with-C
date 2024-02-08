#include <stdio.h>
#define RESULT(A,B) (A + B) * (A+B)

int main(void){
    printf("%d",RESULT(3,5));
    return 0;
}