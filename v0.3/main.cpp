#include "gettoken.h"
#include <iostream>

using namespace std;

int main()
{
	string test1 = "     (23  23 2  23 )       ";
	cout << remove_before_after_spaces(test1) << endl;
}
