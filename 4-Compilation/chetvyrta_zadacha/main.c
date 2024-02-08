#include <stdio.h>
#include <math.h>

int main(void){
    int n = 5;
    long arr[] = {2,3,4,5,6};
    for(int i=0;i<n;i++){
        arr[i] = pow(arr[i],4);
    }   
    for(int i=0;i<n;i++){
       printf("\n Value is %d",arr[i]);
    }
    return 0;
}