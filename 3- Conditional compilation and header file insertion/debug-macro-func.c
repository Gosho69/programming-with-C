#include <stdio.h>
#define DEBUG

int sort_arr(int a[],int n){
     int sorted = 0;
     int sum = 0;
     for(int i=0;i<n-1;i++){
        sorted = 1;
          for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
          }
     }
     for(int i=0;i<n;i++){
         if(i%3==0){
            sum = sum + a[i];
         }
     }
     #if defined DEBUG
      printf("Sorted aarray:\n");
     for(int i=0;i<n;i++){
        printf("%d\n",a[i]);
     }
     printf("Elements on index that can be divided by 3:\n");
      for(int i=0;i<n;i++){
         if(i%3==0){
            printf("%d\n",a[i]);
         }
      }
     #endif
     printf("The sum of the elements on index that can be divided by 3:\n");
     printf("\n %d",sum);
}


int main(){
     int a[7] = {15,3,7,18,19,8,4};
     int n =7;
     sort_arr(a,n);
    return 0;
}