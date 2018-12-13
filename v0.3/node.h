// Node Header 
#ifndef NODE_H
#define NODE_H
#include <iostream>
#include <string>

using namespace std;



class leaf
{
	private:
		string arg;
	public:
		leaf();

		leaf(int num);
		leaf(string arg);
};

class node
{
private:
    int arr_length;
	void* array[];
	string op;
	
public:
	node(); 
	
	node(int num);
 	
	friend class tree;
		
};


#endif 
