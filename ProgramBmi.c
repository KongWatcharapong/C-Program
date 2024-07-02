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
    printf("\nBMI : %.2f\n", calculate);
    if(calculate <= 18.5) //ผอมเกินไป
    {
        printf("Too thin");
    } else if(calculate >= 18.6 && calculate <= 24.9) //พอดี
    {
        printf("Normal and appropriate weight");
    } else if(calculate >= 25.0 && calculate <= 29.9) //อ้วน
    {
        printf("Obese");
    } else // อ้วนเกินไป >= 30
    {
        printf("Very obese");
    }
    return 1;
}
