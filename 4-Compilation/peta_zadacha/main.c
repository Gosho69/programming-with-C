#include <stdio.h>
#include "maths.h"

int main(void){
    int number = 5;
    int result = factoriel_of_num(number);
    printf("Result of factoriel of %d is %d",number,result);
    return 0;
}