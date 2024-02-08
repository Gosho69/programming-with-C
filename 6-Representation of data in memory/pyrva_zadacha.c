#include <stdio.h>
#include <limits.h>
#define TYPE(type, format, bytes, MaxSigned, MinSigned, FormatUnsigned, MaxUnSigned)\
printf("%10s  %4s  %10d  %20lld  %20lld  %5s  %20llu\n",\
#type, format, bytes, (long long)MaxSigned, (long long)MinSigned, FormatUnsigned, (unsigned long long)MaxUnSigned)


int main(void){

    TYPE(char, "%c", sizeof(char), CHAR_MAX, CHAR_MIN, "%c", UCHAR_MAX);
    TYPE(int, "%d", sizeof(int), INT_MAX, INT_MIN, "%u", UINT_MAX);
    TYPE(short, "%hi", sizeof(short), SHRT_MAX, SHRT_MIN, "%hu", USHRT_MAX);
    TYPE(long, "%ld", sizeof(long), LONG_MAX, LONG_MIN, "%lu", ULONG_MAX);
    TYPE(long long, "%lld", sizeof(long long), LLONG_MAX, LLONG_MIN, "%llu", ULLONG_MAX);

    return 0;
}