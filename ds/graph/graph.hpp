/*
 *	graph.hpp
 */

#ifndef __GRAPH_HPP
#define __GRAPH_HPP

class graph {

	static bool x; // variable de contencion
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

		int /*const*/ n();
		int /*const*/ m();
};

void print(graph &);
/*edge(i,j)*/
#endif
