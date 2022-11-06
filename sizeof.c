#include <stdio.h>

/* sizeof() OPERATOR IN C */

int main () {

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

    printf("Size of age is: %d bytes.\n", sizeof(age));
    printf("Size of gpa is: %d bytes.\n", sizeof(gpa));
    printf("Size of weight is: %d bytes.\n", sizeof(weight));
    printf("Size of grade is: %d byte.\n", sizeof(grade));
    printf("Size of name is: %d bytes.\n", sizeof(name));

    return 0;
}

/* OUTPUT */
// Size of age is: 4 bytes.
// Size of gpa is: 4 bytes.
// Size of weight is: 8 bytes.
// Size of grade is: 1 bytes.
// Size of name is: 11 bytes.