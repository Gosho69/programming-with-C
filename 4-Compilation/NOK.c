#include <stdio.h>

int main(void){
    int n1=12, n2=18;
    int nok;
    for(int i=1;i<=n1*n2;i++){
        if(i%n1==0){
            if(i%n2==0){
                nok = i;
                break;
            }
        }
    }
    printf("%d", nok);
    return 0;
}