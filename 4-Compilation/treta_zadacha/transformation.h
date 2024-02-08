#ifndef _TRANSFORMATION_
#define _TRANSFORMATION_

struct transformation {
    long result;
    char error[100];
};

struct transformation transform(char s[]);

#endif
