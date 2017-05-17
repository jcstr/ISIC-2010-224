/*
 *	graph.cpp
 */

#include "graph.h"

int graph::f(int u, int v)
{
	if (u == v) return 0;

	if(u > v) {
		int aux = v;
		v = u;
		u = aux;
	}

	return (u - 1) * (u - 2) / 2 + v + 1;
 }

void print(graph &)
{
	/* TODO */
}
graph::graph(int n): _n(n) {
	
	// _n = n;
	m_max = _n * (n - 1) / 2;
	v = new bool[m_max];

	for (int i = 0; i < m_max; i++) {
		v[i] == 0;
	}
}

~graph()
{
	/* TODO */
}

bool &graph::edge(int i, int j)
{
	/* TODO - verify */
	return v[f(i, j)];
}

int graph::n() const { return _n; }
int graph::m() const { return _m; }
