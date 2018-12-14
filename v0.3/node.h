// Node Header 
#ifndef NODE_H
#define NODE_H
#include <iostream>
#include <string>
//temp
using namespace std;


class Node
{
	protected:
	string name;	//argument||operator name

	public:
	Node();
	Node(const Node&);
	Node& operator=(const Node&);
	~Node();
	string get_name();
	void set_name(string);	
}
/*
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

*/
#endif 
