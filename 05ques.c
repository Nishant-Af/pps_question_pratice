#include <stdio.h>

// Write a program to show the use of for loop to generate the Fibonacci series of n-terms.

int main()
{

    int num;
    printf("Enter Number to find nth term of fibonnaci series : ");
    scanf("%d", &num);

    int a, b;
    a = 0;
    b = 1;

    for (int i = 0; i < num; i++)
    {
        a += b;
        b = a - b;
    }

    printf("The %d term of fibonaci series is : %d\n", num, b);

    return 0;
}