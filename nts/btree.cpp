/*
	main.cpp
*/

#include <cstdio>

class btree {

	class node {
		int _data;
		node *_left;
		node *_right;

		node(int);

		int data() const { return _data; }
		node *left() const { return _left; }
		node *right() const { return _right; }
		node *left(node *l) { return _left = l; }
		node *right(node *r) { return _right = r; }
	};

	node *root;
	int n;
	int s;

bool ins(node *, int);

public:
	btree(int);
	
	int size() const {return s;}
	int cap() const {return n; }

	bool ins(int x) { return ins(root, x);}

	void inorder(node *);

	bool full() const {}
	bool empty() const {}

	void inorder() { inorder(root); }
	void preorder() { preorder(root); }
	void postorder() { postorder(root); }
};

btree::node::node(int x)
{
	_data = x;
	_left = _right = NULL;
}

btree::btree(int _n)
{
	root = NULL;
	n = _n;
	s = 0;
}

bool btree::ins(btree::node *p, int x)
{
	if(full()) {
		printf("Arbol lleno\n");
		return false;
	}

	if (!root) {
		root = new node(x);
		s++;
		return true;
	}

	else {
		node *p = root, *q;

		while (p && p -> data() != x) {
			q = p;
			p = x < p -> data() ? p -> left() : p -> right();
		}

		if (!p) {
			if (x < q -> data()) q -> left(new node(x));
			else q -> right(new node(x));

			s++;
			return true;
		}
	}
}

/*bool ins(int x)
{

}
*/
int main()
{
	btree t(20);

	t.ins(10);
	t.ins(5);
	t.ins(15);
	t.ins(3);
	t.ins(9);
	t.ins(12);
	t.ins(18);
	t.ins(7);
	t.ins(11);
	t.ins(14);
	
	printf("Inorder: ");
	t.inorder(); // implementar funcion en orden
	
	printf("Preorder: ");
	t.preorder();

	printf("Postorder: ");
	t.postorder();
	
	printf("\n\n");

	return 0;
}