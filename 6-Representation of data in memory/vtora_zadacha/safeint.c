#include "safeint.h"
#include <strings.h>
#include <string.h>

struct SafeResult safeadd(int a, int b){
    struct SafeResult result;
    int c;
    c = a + b;
    result.value = c;
    if(a > 0 && b>0){
        if(c > 0){
           result.errorflag = "1";
        }else result.errorflag="0";
    }else{
            if(a < 0 && b < 0){
                if(c < 0){
               result.errorflag = "0";
        }else result.errorflag = "1";
        } 
    } 
    return result;  
}

struct SafeResult safesubtract(int a, int b){
    struct SafeResult result;
    int c;
    c = a - b;
    result.value = c;
    if(a > 0 && b>0){
        if(c > 0){
            result.errorflag = "0";
        }else result.errorflag = "1";
    }else{
            if(a < 0 && b < 0){
                if(c < 0){
                result.errorflag = "0";
        }else result.errorflag = "1";
        } 
    }
    return result; 
}

struct SafeResult safemultiply(int a, int b){
    struct SafeResult result;
    int c;
    c = a * b;
    result.value = c;
    if(a > 0 && b>0){
        if(c > 0){
            result.errorflag = "0";
        }else result.errorflag = "1";
    }else{
            if(a < 0 && b < 0){
                if(c < 0){
                result.errorflag = "0";
        }else result.errorflag = "1";
        } 
    }
    return result; 
}

struct SafeResult safedivide(int a, int b){
    struct SafeResult result;
    int c;
    c = a / b;
    result.value = c;
    if(a > 0 && b>0){
        if(c > 0){
            result.errorflag = "0";
        }else result.errorflag = "1";
    }else{
            if(a < 0 && b < 0){
                if(c <0){
                result.errorflag = "0";
        }else result.errorflag = "1";
        } 
    }
    if(b == 0){
        result.errorflag = "1";
    }
    return result; 
}
struct SafeResult safestrtoint1(char a[]){
    struct SafeResult result;
    result.value = 0;
    result.errorflag = "0";
    int sign = 0;
    int i = 0;

    if(a[0] == '-'){
        sign = 1;
        i = 1;
    }
    
    for(;a[i] != '\0';i++){
        if(a[i] >= '0' && a[i <= '9']){
            safemultiply(result.value,10);
            safeadd(result.value, atoi(a[i]-'0'));
        }else {
            result.value = 0;
            result.errorflag = '1';
            return result;
        }
        if(sign){
            result.value *= -1;
        }
         return result;
    } 
}