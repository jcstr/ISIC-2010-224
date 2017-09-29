#include <iostream>
#include <cstdlib>
#include <cstdio>

using namespace std;

int main()
{
	int num;
	cout << "cantidad de discos de la torre: ";
	cin >> num;
	cout << " ";

	for (int x = 1; x < (1 << num); x++) {
		printf("%i -> %i\n", (x&x - 1) % 3, ((x|x - 1) + 1) % 3);
	}

	return 0;
}
