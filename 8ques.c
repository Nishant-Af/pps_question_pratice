#include <stdio.h>

// Write  a C program to implement 2-d array by adding two matrix

int main()
{

    int Array_2D[3][3] = {
        {1,2,3},
        {4,5,6}, 
        {7,8,9}
    };

    int Another_Array[3][3] = {
        {1,2,3,},
        {4,5,6},
        {7,8,9}
    
    };
    
    int sum_Array[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
           sum_Array[i][j] = Array_2D[i][j] + Another_Array[i][j];
        }
    }
    
    printf("Sum of Two Array is : \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d, ",sum_Array[i][j]);
        }
        printf("\n");
        
    }
    


    return 0;
}