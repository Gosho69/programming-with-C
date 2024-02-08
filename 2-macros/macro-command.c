#include <stdio.h>
#define COMMAND(NAME,TYPE)TYPE ## _  ## NAME ## _ ## command
#define DEFINE_COMMAND(NAME,TYPE)void COMMAND(NAME,TYPE)(void)
int main(){
    external_quit_command();
    another_func_command();
    return 0;
}
DEFINE_COMMAND(quit,external){
    printf("Hello\n");
}
DEFINE_COMMAND(func, another){
    printf("How are you\n");
}
