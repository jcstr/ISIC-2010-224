/*
 *	main.cpp
 */

#include <iostream>

#include "graph.cpp"

int main(int argc, const char * argv[])
{
	graph g(6); // static order

	g.edge(1,3) = true; // reference to the function
	g.edge(1,6) = true;
	g.edge(2,3) = true;
	g.edge(2,4) = true;
	g.edge(2,5) = true;
	g.edge(5,3) = true;
	g.edge(4,5) = true;
	g.edge(4,6) = true;
	g.edge(6,5) = true;
	
	print(g);

	return 0;
}
