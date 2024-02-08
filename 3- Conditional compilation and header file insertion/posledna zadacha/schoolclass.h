#ifndef _SCHOOLCLASS_
#define SCHOOLCLASS
#include "person.h"

struct SchoolClass{
    struct Person uchenik[26];
    char paralelka;
    int number;
    struct Person teacher;
};
#endif