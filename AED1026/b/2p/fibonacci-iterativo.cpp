#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

int num, aux;
int b = 0;
int a = 1;

int main()
{	
	cout << endl << "*Fibonacci Iterativo*" << endl;
	cout << ": ";
	cin >> num;

	int cont = 0;

	if ((num == 0) || (num == 1)) {
		cout << endl << "Nel Pastel" << endl;
	} else {
		while (cont != num) {
			if (cont > 0) {
				cout << endl << "Iteracion: " << cont << a;
			}
			cont++;
			aux = a;
			a = a + b;
			b = aux;
		}
	}

	cout << endl << "El numero final es:" << a;

	return 0;
}
