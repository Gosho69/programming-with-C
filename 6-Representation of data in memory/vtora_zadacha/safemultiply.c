#include <stdio.h>
#include "safeint.h"
#include <limits.h>
#include <stdlib.h>
#include "util.h"

int main(int argc, char ** argv){
    struct SafeResult result;
    result = safemultiply(atoi(argv[1]), atoi(argv[2]));
    if(result.errorflag == "1"){
        OVERFLOW_ERROR;
    }else if((atoi(argv[1]) || atoi(argv[2])) > INT_MAX || (atoi(argv[1]) || atoi(argv[2])) < INT_MIN){
        ARGUMENTS_ERROR;
    }else{
        printf("Result:%d \n error flag:%c",result.value,result.errorflag);
    }
}
