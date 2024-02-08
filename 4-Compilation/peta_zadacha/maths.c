#include "maths.h"

int factoriel_of_num(int num){
    int result = 1;
    while(num > 0){
        result = result * num;
        num--;
    }
    return result;
}