// Node Header 
#ifndef NODE_H
#define NODE_H
#include <iostream>
#include <string>
//temp
using namespace std;


class Node
{
	private:
		string arg;
	public:
}

class Argument : public Node
{
	private:
	public:
		leaf();

		leaf(int num);
		leaf(string arg);
};

class Operator : public Node
{
private:
    int arr_length;
	void* array[];
public:
	Operator();
	
	Operator(int num);
 	
	friend class tree;
		
};


#endif 
