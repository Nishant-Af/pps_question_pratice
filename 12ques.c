#include <stdio.h>

// Write a C program to find factorial of a number using recursion.

int factorial(int n){
    if (n == 0)
    {
        return 1;
    }
    else{
        return n * factorial(n - 1);
    }
}

int main(){

    int  n;
    printf("Enter a Number to find it's factorial : ");
    scanf("%d", &n);

    int result = factorial(n);
    
    printf("The Factorial of %d term is %d ", n, result);


    return 0;
}