#include <stdio.h>
#include "transformation.h"

int main(void) {
    char str1[100];
    char str2[100];
    struct transformation result1;
    struct transformation result2;

    printf("Enter value for the first string: ");
    scanf("%s", str1);

    printf("Enter value for the second string: ");
    scanf("%s", str2);

    result1 = transform(str1);
    result2 = transform(str2);

    printf("result: %ld \n error: %s\n", result1.result, result1.error);
    printf("result: %ld \n error: %s\n", result2.result, result2.error);

    return 0;
}
