#ifndef _QUADRATICROOTS_
#define _QUADRATICROOTS_

struct QuadraticRootsResult{
double x1;
double x2;
char norealroots;
};

struct QuadraticRootsResult findroots(double a, double b, double c);

#endif