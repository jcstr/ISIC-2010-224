#include <cstdio>
#include <cstdlib>
#include <ctime>

#include "olist.h"

int main()
{
	list l(10);

	srand((unsigned)time(NULL));

	int n = rand() % 19 + 1;
	
	for (int i = 0; i < n; i++) {
		int x = rand % 100 + 1;
		printf("Adding %i\n", x);
		l.ins(x);
	}

	printf(l);

	return 0;
}


/*
	if (full()) {
		printf("full list\n");
		return
	}
**/
