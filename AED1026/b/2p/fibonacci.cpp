#include <iostream>

using namespace std;

int fibonacci(int n) 
{
	if (n == 0 || n == 1) {
		return n;
	} else {
		return fibonacci(n - 2) + fibonacci(n - 1);
	}
}

int main()
{
	int num;

	cout << "\n* Fibonacci *\n" << endl;
	
	do {
		cout << ": ";
		cin >> num;
	} while (num < 0 && num != 0);

	cout << endl << "serie:" << endl;
	
	for (int i = 0; i < num; i++) {
		if (fibonacci(i) != 0) {
			cout << fibonacci(i) << " ";
		}
	}
	cout << endl;

	return 0;
}
