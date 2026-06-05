#include <stdio.h>

// Write a C program to print sum of first 5 natural numbers using do--while loop.

int main(){

    int natural_number = 1;
    int i = 0;

    do
    {
        natural_number += i;
        i++;
    } while (i<=5);
    
    printf("Sum of first 5 Natural Number : %d\n", natural_number);


    return 0;
}