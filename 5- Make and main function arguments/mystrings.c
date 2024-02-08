#include "mystrings.h"
#include <stdio.h>

int strlength(char my_string[]){
    int i=0;
    for(i=0;my_string[i] != '\0';i++);
    return i;
}
char* strconcat(char first[],char second[]){
    int len1 = strlength(first);
    int len2 = strlength(second);
    if(len1>50 || len2>50){
       printf("The max length of string is 50 symbols, please try again to enter a string");
    }else{
    for(int i=0;i<(len2 + 1);i++){
        first[i + len1] = second[i];
    }
    return first;
    }
}
int strcompare(char first[],char second[]){
    int j=0;
    for(int i=0;first[i] != '\0', second[i] != '\0';i++){
            if(first[i] > second[i]){
               j = 1;
            }else if(first[i] < second[i]){
                j = -1;
            }
        }
        return j;
}