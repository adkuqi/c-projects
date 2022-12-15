#include <stdio.h>
#include <ctype.h>

int main() {

    char unit;
    float temp;

    printf("Is the temperature in Fahrenheit (write F) or in Celsius (write C)?: \n");
    scanf("%c", &unit);

    unit = toupper(unit); 
    // both 'F' and 'f' as well as 'C' and 'c' will be recognized as valid units

    if(unit == 'C') {
        printf("Enter the temperature in C: \n");
        scanf("%f", &temp);
        temp = (temp * 9 / 5) + 32;
        printf("In Fahrenheit the temperature is %.2f degrees.\n", temp);
    }
    else if(unit == 'F') {
        printf("Enter the temperature in F: \n");
        scanf("%f", &temp);
        temp = ((temp - 32) * 5) / 9;
        printf("In Celsius the temperature is %.2f degrees.\n", temp);
    }
    else{
        printf("%c is not a valid unit.\n", unit);
    }

    system("pause\n");
    return 0;
}
