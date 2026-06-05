#include <stdio.h>

/*
Write a program in C  for Addition of two numbers 
which uses variables along with type conversion 
method. 
*/

int main(){

    int num1, num2;
    float sum;

    printf("Enter Number 1 : ");
    scanf("%d", &num1);
    printf("Enter Number 2 : ");
    scanf("%d", &num2);

    sum = (float) num1 + (float) num2;

    printf("The Sum of Two Number %d + %d = %0.4f\n", num1,num2, sum);



    return 0;
}