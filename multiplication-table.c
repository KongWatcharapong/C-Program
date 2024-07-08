/*
C PROGRAM (BASIC)
INTERFACE : Multiplication Table
DATE : 08/07/2567
*/

#include <stdio.h>

int main() {
    int x = 9;
    for (int i = 1; i <= 12; i++)
    {
        printf("%d * %d = %d\n", x, i, x*i);
    }
    return 1;
}
