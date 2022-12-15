#include <stdio.h>

int main() {

    double num1, num2;
    char op;

	printf("Enter a number: ");
    scanf("%lf", &num1);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op);

    printf("Enter a number: ");
    scanf("%lf", &num2);
		
	switch (op) {
		case '+':
			printf("Result is %lf.\n", num1 + num2);
			break;
		case '-':
			printf("Result is %lf.\n", num1 - num2);
			break;
		case '*':
			printf("Result is %lf.\n", num1 * num2);
			break;
		case '/':
			printf("Result is %lf.\n", num1 / num2);
			break;
		default:
			printf("Please enter a valid operator.\n");
	}

    system("pause\n");
    return 0;
}
