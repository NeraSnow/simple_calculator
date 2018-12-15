#include "gettoken.h"
#include <iostream>

using namespace std;

int main()
{
	string input;
	cout << "Please input your arithemetic expressions: ";
	getline(cin, input);
	cout << "Remove spaces before and after input string " 
	<< remove_before_after_spaces(input) << endl;

	while(!empty_brackets(input))
	{
	cout << "Empty?: " << (bool) empty_brackets(input) << endl;
	cout << "Token = " << gettoken(input) << endl;
	cout << "Remaining String = " << input << endl;
	cout << endl;
	}

	cout << "The remaining input string: = " << input << endl;
}
