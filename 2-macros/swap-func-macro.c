#include<stdio.h>
#include<string.h>
#define SWAP(A, B, TYPE) if(strcmp(#TYPE, "char*") == 0){\
    TYPE temp[20];\
    strcpy(temp, A) ;\
    strcpy(A, B) ;\
    strcpy(B, temp) ;\
}\
else{\
    TYPE temp_if;\
    temp_if = A;\
    A = B;\
    B = temp_if;\
}
int main(){
  char str_e[10] = "World", str_f[10] = "Hello";
  SWAP(str_e, str_f, char*);
  printf("\n str_e = %s, str_f = %s", str_e, str_f); 
  return 0;
}