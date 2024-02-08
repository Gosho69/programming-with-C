#include <stdio.h>
#define SWAP(A, B, TYPE) TYPE temp ;\
  if(strcmp(#TYPE, "char*") == 0){\
    strcpy(temp, A) ;\
    strcpy(A, B) ;\
    strcpy(B, temp) ;\
  }\
  else{\
    temp = A ;\
    A = B ;\
    B = temp ;\
}
#define SORT_ARR(ARRAY,SIZE,TYPE,COMPARE) TYPE ARRAY[SIZE]={1,6,5,4,3};\
 int sorted=0;\
for(int i=0;i<SIZE-1;i++){\
    sorted = 1;\
       for(int j=0;j<SIZE-i-1;j++){\
           if(COMPARE == '>'){\
              if(ARRAY[j] > ARRAY[j+1]){\
                  SWAP(ARRAY[j],ARRAY[j+1],TYPE);\
              }\
           }else if(COMPARE == '<'){\
            if(ARRAY[j]<ARRAY[j+1]){\
                SWAP(ARRAY[j],ARRAY[j+1],TYPE);\
               }\
           }\
       }\
}


int main(){
    SORT_ARR(array,5,int,'>');
    for(int i=0;i<5;i++){
        printf("\n%d",array[i]);
    }

    return 0;
}