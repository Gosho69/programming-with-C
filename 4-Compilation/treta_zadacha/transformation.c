#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "transformation.h"

struct transformation tmp;

struct transformation transform(char s[]) {
    int i;
    int ok=1;
    if (s[0] == '-') {
        i = 1;
    } else {
        i = 0;
    }
    for (; s[i] != '\0'; i++) {
        if (s[i] >= '0' && s[i] <= '9') {
            ok = 0;
        } else {
            ok = 1;
            break;
        }
    }
    printf("%d",ok);
    if (ok == 0) {
        tmp.result = atoi(s);
        tmp.error[0] = '\0';
    } else {
        tmp.result = 0;
        snprintf(tmp.error,sizeof(tmp.error),"Invalid input string");
    }

    return tmp;
}
