#include <iostream>

using namespace std;

int mcd(int a, int b) 
{
	if (a < b) {
		return mcd(b, a);
	}
	
	if (b == 0) {
		return a;
	}

	return mcd(b, a % b);
}

int main() 
{
	int a, b;

//	a = 364332;
//	b = 30252;
	
	cout << endl << "* Euclides " << endl;
	cout << "a: ";
	cin >> a;
	cout << "b: ";
	cin >> b;

	cout << "mcd (" << a << ", " << b << ") = " << mcd(a, b) << endl;
					    
	return 0;
}

