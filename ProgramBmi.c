/*
C PROGRAM (BASIC)
INTERFACE : BMI
DATE : 01/07/2567
*/

#include <stdio.h>

int main() {
    printf("\
    *********************\n\
    \tProgram BMI\n\
    *********************\n");

    float input[2];
    printf("input weight (kg): ");
    scanf("%f", &input[0]);
    printf("input height (cm): ");
    scanf("%f", &input[1]);

    float calculate = input[0] / ((input[1] / 100) * (input[1] / 100));
    printf("BMI : %.2f\n", calculate);
    return 1;
}
