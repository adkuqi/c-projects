#include <stdio.h>

/* BASIC DATATYPES IN C */

int main () {

    int x; 
    // declaring the variable as an integer
    x = 100; 
    // initializing the variable
    int y = 123; 
    // both declaring and initializing the variable

    int age = 23; 
    // integer (whole number) = 2/4 bytes (16/32 bits)
    float gpa = 2.34; 
    // floating point number = 4 bytes (32 bits, 6-7 digits)
    double weight = 83.39397817149325255; 
    // double = 8 bytes (64 bits, 14-15 digits)
    char grade = 'B'; 
    // single character = 1 byte (8 bits)
    char name[] = "Peter Hans"; 
    // array of characters = here 11 bytes

    printf("Hello %s!\n", name); 
    // %s for string
    printf("You are %d years old.\n", age); 
    // %d for int
    printf("Your average grade is %c.\n", grade); 
    // %c for char
    printf("Your GPA is %.2f.\n", gpa); 
    // %f for float
    // .2 for 2 decimal places
    printf("Your weight is %.12lf kg.\n", weight); 
    // %lf (long float) for double
    return 0;
}

/* OUTPUT */
// Hello Peter Hans!
// You are 23 years old.
// Your average grade is B.
// Your GPA is 2.34.
// Your weight is 83.393978171493 kg.