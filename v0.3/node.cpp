// node.cpp 

#include "node.h"
#include <iostream>
using namespace std;

Node::Node(){
	this->name ="";
}

Node::Node(const Node& in){
	this->name = in.name;
}

Node& Node::operator=(const Node& in){
	this->name = in.name;
	return *this;
}

string Node::get_name(){
	return this->name;
}

void Node::set_name(string name){
	this->name = name;
}
/*
Argument::Argument()
{
    arg;
};

Argument::Argument(int num)
{
    arg = to_string(num);
};


Operator::Operator()
{
    arr_length = 0;
	array[];
	arg;
}

Operator::Operator(int num)
{
    num = num;
	
}
*/
