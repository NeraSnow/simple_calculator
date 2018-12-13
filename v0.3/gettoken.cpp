// gettoken.cpp

#include "gettoken.h"
#include <iostream>
#include <cstdlib>

using namespace std;

// Example (+ 2 3)
// (2 + 3)
// (2 3 +)


string remove_before_after_spaces(string & str)
{
    // The integers below logged the position of 
    // non whitespaces at extreme position
    int first_non_whitespace;
    int last_non_whitespace;
    int str_len;
    bool met_non_whitespace = false;

    for(int i = 0; i < str.length(); i++) // iterate through the whole string
    {
        if (!met_non_whitespace) // haven't met the first non whitespace
        {
                // If we met the first non_whitespce
                if (str[i] != ' ')
                {
                    met_non_whitespace = true;
                    first_non_whitespace = i;
                }
            
        }
        else // We have met the first non whitespace
        {
            if (str[i] != ' ')
            {
                last_non_whitespace = i;
            }
        }
    }
	str_len = last_non_whitespace - first_non_whitespace + 1;	
//	cout << "First Non Whitespace position " << first_non_whitespace << endl;
//	cout << "Last Non Whitesoace position " << last_non_whitespace << endl;
//	cout << "String Lengths = " << str_len << endl;
	string sub_str = str.substr(first_non_whitespace, str_len);
//	cout << "Sub String" << sub_str << endl;
    str = sub_str;

	return sub_str;

}


// balanced_statment(const & str) consumes a string and 
// returns either true or false to determine if the string 
// is balanced by brackets
bool balanced_statement(const string & str)
{
    int num_left_brackets = 0;
    int num_right_brackets = 0;

    for(int i = 0; i < str.length(); ++i)
    {
        // Expandable in the future
        if (str[i] == '(')
            num_left_brackets++;
        else if (str[i] == ')')
            num_right_brackets++;
        else
            continue;
    }
    if (num_left_brackets == num_right_brackets)
        return true;
    else 
        return false;
}



// Assume that the str here is balanced

/*
string[] gettoken(string & str)
{
    if (str[0] != '(' || str[str.length() - 1] != ')')
    {
        cout << "Not Properly Closed Statement" << endl;
        exit (EXIT_FAILURE);
    }
    else
    {
        int start_pos = 1;
        int end_pos = 1;
        while (str[end_pos] != ' ')
            end_pos++;
        
    }
}
*/
