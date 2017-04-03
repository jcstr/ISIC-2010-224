

class list {

	class node {
		int _data;
		node *next;

		public:
			node(int);
			int data;

			node *next() const;
			node *next(node *);
	};

node *start;
int capacidad;
int tamanio;

public:
	list(int);
	~list();

/* se implementan en la clase olist.cpp  */
	void ins(int);
	bool search(int);
	void supr(int);

	int capacity() const { return n; } 

};


/* olist.cpp */

list::list(int _n)
{
	start = NULL;
	
}

void list::ins(int) 
{
	if (empty()) start = new node(x);
	else {
		node *p = start, *q;
		
		while (p && p -> p data() < x) {
			q = p;
			p = p -> next();
		}

		node *aux = new node(x);

		if (!p) { // se evalua como negado
			//insersion por el final de la lista
			q -> next(aux);
		} else if (p == start) {
			// insersion por el frente
			start = aux;
			aux -> next();
		} else {
			// insersion por en medio

		}
	}

}

bool list::search()
{

}

void list::supr(int)
{

}

void print(list &l) // no tiene dominio en list 
{
	printf("[%i]: ", l.size());
	
	for (list::node *p = l.start; p; p = p -> next()) 
		printf("%4i", p -> data());

		printf("\n");
}
// friend void print(list &);


extern void print(list &);
