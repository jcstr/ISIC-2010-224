/*
 *	graph.hpp
 */

class graph {

	bool *v;

	int _n;
	int _m; // current
	int m_max;

	int f(int, int);

	friend void print(graph &);

	public:
		graph(int);
		~graph();

		bool &edge(int, int);

		const int n();
		const int m();
};

void print(graph &);
/* edge(i,j) */
