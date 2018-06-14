#include <stdlib.h>
#include <stdbool.h>

struct btreenode {
	char* str;
	int length;
	struct btreenode *left;
	struct btreenode *right;
};

struct btree {
	struct btreenode *root;
};

// btree_create() creates a new btree
// effects: allocates memory: call bst_destroy
struct btree *btree_create(void) {
	struct btree *t = malloc(sizeof(struct btree));
	t->root = NULL;
	return t;
}

struct btreenode *new_leaf(int i) {
	struct btreenode *leaf = malloc(sizeof(struct btreenode));
	leaf->item = i;
	leaf->left = NULL;
	leaf->right = NULL;
	return leaf;
}