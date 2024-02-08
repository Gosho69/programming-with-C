#include <stdio.h>
#define DEBUGGER(something) printf("%s\n %d \n %s",#something,__LINE__,__FILE__);

int main(){
    int something = 5;
    DEBUGGER(something);
    return 0;
}