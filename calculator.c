#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main(void) {
	printf("Welcome, this is an simple version of the implementation of a calculator. \n");
	printf("Version 0.1 \n");
	double n1, n2;
	char operator;
	char consent;
	double result;
	bool go_on = true;
	
	
	while (go_on) {
	printf("Please input your first number. \n");
	int i = scanf("%lf", &n1);
	if (i != 1) {
		printf("Invalid input!\n");
		break;
	}
	
	printf("First number successfully read!\n");
	
	printf("Please input your second number. \n");
	int k = scanf("%lf", &n2);
	if (k != 1) {
		printf("Invalid input!\n");
		break;
	}
	printf("Second number successfully read!\n");
	
	printf("Please input your operator. (+, -, *, /) \n");
	int j = scanf(" %c", &operator);
	if (j != 1) {
		printf("Invalid input!\n");
		break;
	}
	switch(operator)
    {
        case '+':
            result = n1 + n2;
            break;

        case '-':
            result = n1 - n2;
            break;

        case '*':
            result = n1 * n2;
            break;

        case '/':
            result = n1 / n2;
            break;

        // operator doesn't match any case constant (+, -, *, /)
        default:
            printf("Did you feed in a fishy operator?\n");
			exit(1);
    }
	printf("%lf\n", result);
	while(1) {
		printf("Perform a new calculation?(y/n)");
		int j = scanf(" %c", &consent);
		if (j != 1) {
			printf("Invalid input!\n");
		} else if (consent == 'n') {
			go_on = false;
      break;
		} else if (consent == 'y') {
			go_on = true;
      break;
		} else {
			printf("Did you feed in a wrong character?");
		}
	}
	
		
	}
	
	
	
	system("pause");
	return 0;
}