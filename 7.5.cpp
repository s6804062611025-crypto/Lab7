#include <stdio.h>

long convert(long h, long m, long s);

int main(void) {
    long hour, minute, second, total;
    scanf("%ld %ld %ld", &hour, &minute, &second);
    total = convert(hour, minute, second);
    printf("%ld\n", total);
    return 0;
}

long convert(long h, long m, long s) {
    return h*3600 + m*60 + s;
}

