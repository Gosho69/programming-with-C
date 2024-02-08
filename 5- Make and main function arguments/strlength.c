#include <stdio.h>
#include "mystrings.h"

int main(int argc, char *argv[]){
    if(argc!=2)printf("More or less than needed arguments");
    else printf("Lenght of string:%d",strlength(argv[1]));
    return 0;
}