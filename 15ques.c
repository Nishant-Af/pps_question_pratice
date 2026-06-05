#include <stdio.h>

// Write a C program to show use of file handling (write into a text file).

int linearsearch(int arr[], int size, int target){
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

    int size;
    printf("Enter How Much size you want in your Array : ");
    scanf("%d", &size);

    int array[size];
    for (int i = 0; i < size; i++)
    {
        printf("Enter Value at position %d in your Array : ", i);
        scanf("%d", &array[i]);
    }

    int target;
    printf("Enter the Value Search For : ");
    scanf("%d", &target);

    int result =  linearsearch(array, size, target);

     if (result != -1) {
        printf("Element found at index: %d\n", result);
        printf("Position of element: %d\n", result + 1);
    } else {
        printf("Element not found in the array.\n");
    }

    

    return 0;
}