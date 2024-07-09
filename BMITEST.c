#include <stdio.h>
#include <conio.h>

//Fix warning
/*
warning: implicit declaration of function 'system' [-Wimplicit-function-declaration]
*/
#ifdef __cplusplus__
  #include <cstdlib>
#else
  #include <stdlib.h>
#endif

int main(){
  float w,h,BMI;
  char ch[]="";

  do{
    system("cls");
    printf("*************************\n");
    printf("Program caculate BMI\n");
    printf("*************************\n");
    printf("Input weight (kg): ");
    scanf("%f",&w);
    printf("Input height (cm): ");
    scanf("%f",&h);
    // Calculate height from cm to m
    h = h/100;
    // Calculate BMI = weight(kg) / (height(m) * height(m))
    BMI = w/(h*h);
    printf("Calculate BMI = %.2f\n",BMI);
    if (BMI<18.5) {
        printf("Thin\n");
    } else if (BMI>=18.5&&BMI<=22.9) {
        printf("Normal\n");
    } else if (BMI>22.9&&BMI<=24.90){
        printf("Fat\n");
    } else if (BMI>24.9&&BMI<=29.90){    
        printf("Fat1\n");
    } else {
        printf("Fat2\n");
    }

    printf("*************************\n");

    printf("Do yo want to continue [Press N to Exit]: ");
    scanf("%s",&ch);
    // if press N to Exit program
  }while(ch[0]!='N');

  return 0;
}
