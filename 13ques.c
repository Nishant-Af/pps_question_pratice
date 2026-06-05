#include <stdio.h>

// Write a C program to get memory address using address of operator(use of pointers)


int main(){

    int num = 69;
    int * ptr = &num;

    printf("The Address of num is %p\n" , ptr);
    printf("The Value of num is %d " , *ptr);

    return 0;
}