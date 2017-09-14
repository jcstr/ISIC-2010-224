#include <iostream>

using namespace std;

long count;

void hanoi(int n, char source, char target, char aux)
{
	if (n == 0) {
		return;
	}

	count++;

	hanoi(n - 1, source, aux, target);
	cout << source << " -> " << target << endl;
	hanoi(n - 1, aux, target, source);
}

int main(int argc, const char * argv[])
{
	int n;
	
	cout << endl << "* Hanoi *" <<  endl;
	cout << ": ";
	cin >> n;

	count = 0;

	hanoi(n, 'A', 'C', 'B');

	cout << "movements: " << count << endl;
	
	return 0;
}
