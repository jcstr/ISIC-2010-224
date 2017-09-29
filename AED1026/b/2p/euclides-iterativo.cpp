#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
	int x, y, aux;

	cout << endl << "*Euclides Iterativo*" << endl;
	cout << "ingrese x: ";
	cin >> x;
	cout << "ingrese y: ";
	cin >> y;

	while (y == 0) {
		aux = x % y;
		x = y;
		y = aux;
	}

	cout << "El m.c.d es: " << x << endl;

	return 0;
}
