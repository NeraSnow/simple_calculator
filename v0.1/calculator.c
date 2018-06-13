#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main(void) {
	printf("Welcome, this is a simple version of the implementation of a calculator. \n");
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
		scanf("%*c");
		goto redo;
	//	break;
	}
	
	printf("First number successfully read!\n");
	
	printf("Please input your second number. \n");
	int k = scanf("%lf", &n2);
	if (k != 1) {
		printf("Invalid input!\n");
		scanf("%*c");
		goto redo;
//		break;
	}
	printf("Second number successfully read!\n");
	
	read_operator:
	printf("Please input your operator. (+, -, *, /) \n");
	int j = scanf(" %c", &operator);
	if (j != 1) {
		printf("Invalid input!\n");
		scanf("%*c");
		goto redo;
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
			
			goto read_operator;
    }
	printf("%lf\n", result);
	redo:
	while(1) {	
		printf("Perform a new calculation?(y/n)");
		int j = scanf(" %c", &consent);
//		printf("What?");
//		printf("%c", consent);
		if (j != 1) {
			printf("Invalid input!\n");
			scanf("%*c");
		} else if (consent == 'n') {
			go_on = false;
      break;
		} else if (consent == 'y') {
			go_on = true;
      break;
		} else {
			printf("Did you feed in a wrong character?\n");
		}
	}
	
		
	}
	
	
	
	system("pause");
	return 0;
}