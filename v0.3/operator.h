#ifndef OPERATOR_H
#define OPERATOR_H
#include "node.h"

class Operator:public Node{

	protected:
		int arr_length;
		void* array[];

	public:
		Operator();
		Operator(int arr_length);//constractor; create based on arr_length
		Operator(const Operator&);
		Operator& operator = (const Operator&);
		~Operator();
		int get_length();
		void* get_array();
		void set_length();
		void set_array();

};

#endif
