// Node Header 
#ifndef node_H
#define node_H
#include <iostream>

using namespace std;

class node
{
private:
    int num;
	node *left;
	node *right;
	
public:
	node();
	
	node(int num);
 	
	friend class tree;
		
};

#endif 
