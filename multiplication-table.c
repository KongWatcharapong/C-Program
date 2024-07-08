/*
C PROGRAM (BASIC)
INTERFACE : Multiplication Table
DATE : 08/07/2567
*/

#include <stdio.h>

int main() {
    int i = 1, x = 9;
    while (i <= 12)
    {
        printf("%d * %d = %d\n", x, i, x*i);
        i++;
    }
    return 1;
}
