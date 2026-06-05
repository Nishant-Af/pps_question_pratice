#include <stdio.h>

//Write a program to show the use of switch case.

int main(){

    int a = 1;

    switch (a)
    {
    case 1:
        printf("this is 1");
        // break;
    
    case 2:
        printf("this is 2");
        // break;
    
    case 3:
        printf("this is 3");
    
    case 4:
        printf("this is 4");
    
    case 5:
        printf("this is 5");
    
    case 6:
        printf("this is 6");
    
    case 7:
        printf("this is 7");
    
    case 8:
        printf("this is 8");
    
    case 9:
        printf("this is 9");
    
    default:
        printf("its always run if break statement dosen't given in cases");
        break;
    }

    return 0;
}