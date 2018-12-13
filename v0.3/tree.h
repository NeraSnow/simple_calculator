// Tree header
#ifndef TREE_H
#define TREE_H
#include <string>
#include "node.h"
using namespace std;

class tree
{
	private:
		node *root;
		//void inorder(node *);
		void add(int num, node *root);	
		//bool search(int num, node *root);
		
		
		
	public:
		tree();
		//bool search(int num);
		void add(int num);
		void xdelete(int num);
		void inorder();
		int height(node*);
		void inorder(node *);
		//{
		//inorder(root);
		//}

};

#endif 