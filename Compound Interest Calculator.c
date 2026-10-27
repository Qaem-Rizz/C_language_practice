#include<stdio.h>
#include<math.h>
int main(){
    int principal;
    float rate;
    float time;
    float compounded;

    printf("Enter the principal amount: ");
    scanf("%d" , &principal);
    printf("\n");

    printf("Enter the rate of interest: ");
    scanf("%f" , &rate);
    printf("\n");

    printf("Enter the time (in years): ");
    scanf("%f" , &time);
    printf("\n");

    printf("Enter the compounding times per year: ");
    scanf("%f" , &compounded);
    printf("\n");

    float total_amount= principal * pow( 1 + (rate/100)/compounded, compounded *time);
    printf("YOUR TOTAL AMOUNT IS: %.2f FOR THE %.2f YEARS AT A RATE OF %.2f , COMPOUNDED %.1f EVERY YEAR" , total_amount, time, rate, compounded);
    return 0;


}
