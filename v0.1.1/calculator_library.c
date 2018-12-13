#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

	double calculator_core(double n1, double n2, char opr) {
		double result;
		switch (opr)
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

		}
		return result;
	}