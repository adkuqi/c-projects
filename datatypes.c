#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int age = 40; //integer without decimal point, %d
    double gpa = 3.5; //decimal number with point in double, %lf (%f is for float)
    char grade = 'A'; //one single character can be stored here, %c
    char phrase [] = "this is so cool"; //string of multiple characters, %s, special type of data cannot be later modified like the former ones
    printf("He is %d years old, his GPA is %.1lf, his grade is %c, and his phrase is %s.", age, gpa, grade, phrase);
    return 0;
}