/*
 *	graph.cpp
 */

#include "graph.hpp"

/* global */
bool graph::x = false;

graph::graph(int n): _n(n) 
{
	m_max = _n * (n - 1) / 2;
	v = new bool[m_max];

	for (int i = 0; i < m_max; i++) {
		v[i] = false;
	}
}

graph::~graph()
{
	/* TODO */
}

int graph::f(int u, int v)
{
	if (u == v) {
		return 0;
	}

	if(u > v) {
		int aux = v;
		v = u;
		u = aux;
	}

	return (u - 1) * (u - 2) / 2 + v + 1;
 }

void print(graph &g)
{
	for (int i = 2; i < g._n; i++) {
		g.v[i] = false;

		for (int j = 1; j < i; j++) {
			printf("[%i, %i] %i\n", i, j, g.v[gf.(i,j)]);
		}
	}
}

bool &graph::edge(int i, int j)
{
	if (i < 1 || i > _n || j < 1 || j > _n || j == i) {
		
		printf("[Graph]: bad index\n");

		/*bool x = false;*/
		return x;
	}
	return v[f(i, j)];
}

/* verify const */
int graph::n() /*const*/ { return _n; }
int graph::m() /*const*/ { return _m; }
