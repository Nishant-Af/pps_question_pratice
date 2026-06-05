#include <stdio.h>
#include <string.h>

/// Write a C program to show the use strings with some functions of strings.

int main(){

    char name[20] = "Nishant";
    char sir_name[10] = "Rohilla";
    char copy_str[35];

    // String functions 
   char concatinate[31] =  strcat(name, sir_name);
   strcpy(copy_str, name);
   int len = strlen(name);

    return 0;
}