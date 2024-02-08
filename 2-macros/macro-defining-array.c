#include <stdio.h>
#define SIZE 5
#define ARRAY for(int i=0;i<SIZE;i++){ \
    printf("%d\n",a[i]); \
}


int main()
{
  int a[SIZE] = {1,2,3,4,5};
  ARRAY
    return 0;
}