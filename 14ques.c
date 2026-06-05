#include <stdio.h>
#include <string.h>

// Write a C program to show use of structures to read and write basic information of a student.


struct Students
{
    char name[20];
    int id;
    char Grade; 
    int Marks;
};

int main(){

    struct Students s1, s2;

    s1.Grade = 'A';
    s1.id = 001;
    strcpy(s1.name, "Prince Viswa");
    s1.Marks = 69;

    printf("The Name of Student : %s\n", s1.name); 
    printf("The id of Student : %d\n", s1.id); 
    printf("The Marks of Student : %d\n", s1.Marks); 
    printf("The Grade of Student : %c\n", s1.Grade); 
    return 0;
}