#include <stdio.h>

// Write a C program to Swap numbers using Function Call by Value.

void swap(int a, int b)
{

    a = a + b;
    b = a - b;
    a = a - b;
    printf("After Swap x = %d & y= %d\n", a, b);
}

int main()
{

    int x, y;
    printf("Enter Number 1 : ");
    scanf("%d", &x);
    printf("Enter Number 2 : ");
    scanf("%d", &y);

    printf("Before Swap x = %d & y = %d\n", x,y);
    swap(x,y);

    return 0;
}