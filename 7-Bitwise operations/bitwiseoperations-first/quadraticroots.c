#include "quadraticroots.h"
#include <math.h>
#include <stdio.h>

struct QuadraticRootsResult findroots(double a, double b, double c){
    struct QuadraticRootsResult result;
        double D;
        D = (b * b) - (4*a*c);
        if(D < 0){
            result.norealroots = '1';
            return result;
        }else if(D == 0){
            result.x1 = (-b)/ (2*a);
            result.x2 = (-b)/ (2*a);
            result.norealroots = '0';
            return result;
        }else{
            result.x1 = (-b + sqrt(D)) / (2*a);
            result.x2 = (-b - sqrt(D)) / (2*a);
            result.norealroots = '0';
            return result;
        }

}