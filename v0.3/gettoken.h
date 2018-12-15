// gettoken.h

#ifndef GETTOKEN_H
#define GETTOKEN_H

#include <string>

using namespace std;


string remove_before_after_spaces(string & str);

bool balanced_statement(const string & str);

string gettoken(string & str);

bool empty_brackets (const string & str);
#endif
