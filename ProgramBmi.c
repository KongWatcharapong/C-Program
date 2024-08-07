/*
C PROGRAM (BASIC)
INTERFACE : BMI
DATE : 09/07/2567
*/

#include <stdio.h>
#include <string.h>

//Fix warning
/*
warning: implicit declaration of function 'system' [-Wimplicit-function-declaration]
*/
#include <stdlib.h>

int main() {
    char ch[]="";
    do
    {
        system("cls");
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
        } else if(calculate >= 18.6 && calculate <= 22.9) //พอดี
        {
            printf("Normal and appropriate weight");
        } else if(calculate >= 23.0 && calculate <= 24.9) //โรคอ้วนระดับ 1
        {
            printf("Obesity level 1");
        } else if(calculate >= 25.0 && calculate <= 29.9) //โรคอ้วนระดับ 2
        {
            printf("Obesity level 2");
        } else //โรคอ้วนระดับ 3 >= 30
        {
            printf("Obesity level 3");
        }
        printf("\n*************************\n");

        printf("Do yo want to continue [Press N to Exit]: ");
        scanf("%s",&ch);
    }while(ch[0]!='N');
    
    return 1;
}
