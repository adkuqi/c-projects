#include <stdio.h>

int main() {

    float euro;
    float pound;
    char currency;

    printf("Do you want to convert euro into pound (write E) or pound into euro (write P)?: \n");
    scanf("%c", &currency);

    currency = toupper(currency); 

    if(currency == 'E') {
        printf("Write the amount of euro: \n");
        scanf("%f", &euro);
        pound = euro * 0.88;
        printf("This is %.2f pounds.\n", pound);
    }
    else if(currency == 'P') {
        printf("Write the amount of pound: \n");
        scanf("%f", &pound);
        euro = pound * 1.14;
        printf("This is %.2f euros.\n", euro);
    }
    else{
        printf("%c is not a valid currency.\n", currency);
    }

    system("pause\n");
    return 0;
}