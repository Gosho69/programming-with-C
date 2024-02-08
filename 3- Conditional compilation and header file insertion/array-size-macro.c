#include <stdio.h>
#include <math.h>
#define ARRAY_SIZE 5

int main(){
     #if defined ARRAY_SIZE && ARRAY_SIZE < 10 && ARRAY_SIZE > 1
      int array[ARRAY_SIZE];
      for(int i=0;i<ARRAY_SIZE;i++){
        array[i] = pow(2,i);
      }
      for(int i=0;i<ARRAY_SIZE;i++){
          printf("%d\n",array[i]);
      }
      #else
      printf("This array size cannot be used in this porgram, plesase provide an array size tha is between 1 and 10");
      #endif
    return 0;
}