#include <stdio.h>
#include "mystrings.h"

int main(int argc,char *argv[]){
    if(argc!=3)printf("More or less than needed arguments");
    else printf("Concataneted string: %s",strconcat(argv[1],argv[2]));
    return 0;
}   