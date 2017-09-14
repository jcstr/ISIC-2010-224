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
	int num, result;

	cout << endl << "* Factorial *" << endl;
	
	cout << ": ";
	cin >> num;

	result = factorial(num);

	cout << endl << "* Factorial of " << num << ": " << result << endl;

	return 0;
}
