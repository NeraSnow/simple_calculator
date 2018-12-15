// gettoken.cpp

#include "gettoken.h"
#include <iostream>
#include <cstdlib>

using namespace std;

// Example (+ 2 3)


// (2 + 3)
// (2 3 +)

// remove_before_after_spaces(string & str) removes 
// all the whitespaces before a str and after
// The original string is modified and the 
// modified string is returned.
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



string gettoken(string & str_org)
{
    if (str_org[0] != '(' || str_org[str_org.length() - 1] != ')')
    {
        cout << "Not Properly Closed Statement" << endl;
        exit (EXIT_FAILURE);
    }

    string str = str_org.substr(1, str_org.length() - 2);

    int start_pos = 0;
    int end_pos;

    string str_ret;
    
    while (str[start_pos] == ' ' ) // get rid of the whitespaces before 
        start_pos++;              // non whitespaces

    end_pos = start_pos;

    if (str[start_pos] == '(') // the first argument is in brackets
    {
        while (str[end_pos] != ')' && end_pos < str.length() - 1 ) // stop at the right bra
            end_pos++;
    }
    else
    {
        while (str[end_pos] != ' ' && end_pos < str.length()) // get to the place of next whitespace
            end_pos++;              // when stopped (one tile after the last non whitespace)
        
        end_pos--;
        
    }

    str_ret = str.substr(start_pos, end_pos - start_pos + 1);
//    cout << "New str = " << str.substr(start_pos, end_pos - start_pos + 1) << endl;
    str_org = "(" + str.erase(start_pos, end_pos - start_pos + 1) + ")";
    return str_ret;

}


/*
// Assume that the str here is balanced

// gettoken(string & str) returns the first token in the bracket
// 
string gettoken(string & str_org)
{
    if (str_org[0] != '(' || str_org[str_org.length() - 1] != ')')
    {
        cout << "Not Properly Closed Statement" << endl;
        exit (EXIT_FAILURE);
    }

    string str = str_org.substr(1, str_org.length() - 2);

    int start_pos = 0;
    int end_pos;

    while (str[start_pos] == ' ' ) // get rid of the whitespaces before 
        start_pos++;              // non whitespaces
    
    end_pos = start_pos;

    if (str[start_pos] == '(') // the first argument is in brackets
    {
        while (str[end_pos] != ')' && end_pos < str.length() - 1 ) // stop at end last tile or has ')'
            end_pos++;
        
    }
    else // it is an argument
    {
    
    while (str[end_pos] != ' ' && end_pos < str.length() - 1) // get to the place of next whitespace
        end_pos++;              // when stopped (one tile after the last non whitespace)

    end_pos--; // back to the last tile non whitespace 
    
    }

    cout << "Start pos = " << start_pos << endl;
    cout << "End pos = " << end_pos << endl;
    cout << "String length = " << str.length() << endl;
     
//    string substr1 = str.substr(0, start_pos - 0);
    string substr2 = str.substr(start_pos, end_pos - start_pos + 1);
    string substr3 = str.substr(end_pos + 1, str.length() - (end_pos + 1));

    str_org = '(' + substr3 + ')';

    string ret_str = remove_before_after_spaces(substr2);
    return ret_str;  
}

*/

bool empty_brackets (const string & str)
{
    for(int i = 0; i < str.length(); i++)
    {
        if (str[i] != ' ' && str[i] != '(' && str[i] != ')')
            return false;
    }
    return true;
}

