#include <stdio.h>
#include "quadraticroots.h"
#include <math.h>


int main(void){
    int a = 1;
    int b = -1;
    int c = -3;
    struct QuadraticRootsResult result1 =  findroots(a,b,c);
    printf("For int argumnets: x1:%lf\n x2:%lf\n norealroots:%c",result1.x1, result1.x2, result1.norealroots);
    float a1 = 3.5;
    float b1 = 5.6;
    float c1 = 10.2;
    struct QuadraticRootsResult result2 = findroots(a1,b1,c1);
     printf("For float argumnets: x1:%lf\n x2:%lf\n norealroots:%c",result2.x1, result2.x2, result2.norealroots);
     double a2 = 5.123123;
     double b2 = 4.234234;
     double c2 = 9.135135;
    struct QuadraticRootsResult result3 = findroots(a1,b1,c1);
     printf("For double argumnets: x1:%lf\n x2:%lf\n norealroots:%c",result3.x1, result3.x2, result3.norealroots);
    return 0;
}