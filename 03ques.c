#include <stdio.h>

//Write a program to find the largest of three numbers.(if then else)

int main(){

    int num1, num2, num3;

    printf("Enter Number 1 : ");
    scanf("%d", &num1);
    printf("Enter Number 2 : ");
    scanf("%d", &num2);
    printf("Enter Number 3 : ");
    scanf("%d", &num3);

    if (num1 > num2 && num1 > num3)
    {
        printf("%d is Greater", num1);
    }
    else if (num2 > num1 && num2 > num3)
    {
        printf("%d is Greater", num2);
    }
    else if (num3 > num1 && num3 > num2)
    {
        printf("%d is Greater", num3);
    }
    else{
        printf("Invalid or numbers are equal");
    }


    return 0;
}