#include <stdio.h>

// Write a C program to implement linear search.

int linearSearch(int arr[], int size, int target){

   for (int i = 0; i < size; i++)
   {
    if (arr[i] == target)
    {
        return i;
    }
    
   }
   return -1;
}

int main(){

    int size, target, result;

    printf("Enter The Size You Want in your Array : ");
    scanf("%d", &size);

    int array[size];

    for (int i = 0; i < size; i++)
    {
        printf("Enter the Value of Array at index %d : ", i);
        scanf("%d", &array[i]);

    }

    printf("Enter Your Query for Search : ");
    scanf("%d", &target);
    
    result = linearSearch(array, size, target);

    if (result == -1)
    {
        printf("Your Search Result Not Found ");
    }
    else{
        printf("Your Search Query Found at index %d is %d ", result, target);
    }
    

    return 0;
}