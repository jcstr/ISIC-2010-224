#include <iostream>

using namespace std;

int factorial(int n)
{
	unsigned long long fact = 1;

	for (int i = 1; i <= n; i++) {
		fact *= i;
	}

	return fact;
}

int main()
{	
	int num, resultado;

	cout << endl << "* Factorial *" << endl;
	
	cout << ": ";
	cin >> num;

	resultado = factorial(num);

	cout << endl << "* Factorial de " << num << " es: " << resultado << endl;

	return 0;
}
