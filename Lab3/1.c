#include <stdio.h>
#define n x << y + y >> z - c + d >> 6

int main(void)
{

    static int ghi = 7;
    printf("%d", ghi ^= 4 << sizeof(ghi));

    return 0;
}