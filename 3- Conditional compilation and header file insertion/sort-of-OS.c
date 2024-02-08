#include <stdio.h>


int main(){
    int a[10] = {5,20,13,9,4,42,21,22,33,4};
    int n = 10;
    #if defined _WIN32
    int sorted = 0;
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
    #elif defined __linux__
        int min;

        for (int i = 0; i < n; i++)
        {
            min = i;
            for ( int j = i; i < n; j++)
            {
              if(a[j] < a[max]) max = j;  
            }
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
            
        }
    #elif defined __APPLE__
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }     
    #else 
      int reversedArray[n]; 
    
    for (int i = 0; i < n; i++) {
        reversedArray[i] = a[n - 1 - i];
    }
    for (int i = 0; i < n; i++) {
        a[i] = reversedArray[i];
    }
    #endif
    return 0;
}