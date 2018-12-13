#include <iostream>

extern "C" {
#include "calculator_library.h"
	extern double calculator_core(double n1, double n2, char opr);
}

int main(){
	
using namespace std;

//cout << calculator_core(0.5, 0.3, '+')<< endl;

double a1 = 0, a2 = 0;
char op = '\0';
double answer = 0;

cout << "Hello, there. What would you like to calculate today?" << endl;
cout << "Please provide me with a expression" << endl;
cin >> a1;
cin >> op;
cin >> a2;
answer = calculator_core(a1, a2, op);
cout << answer << endl;
    return 0;
}

