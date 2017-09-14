#include <iostream>
#include <cstdlib>

using namespace std;

int ackerman(int m, int n)
{
    if (m == 0) {
      return n + 1;
	} else if (n == 0) {
		return ackerman(m - 1, 1);
	} else { 
		return ackerman(m - 1, ackerman(m, n - 1));
	}
}

int main()
{
    int m, n, num;

    cout << endl << "* Ackerman *" << endl;

    cout << "<m>: ";
    cin >> m;
    cout << "<n>: ";
    cin >> n;
    
    num = ackerman(m, n);
    
    cout << endl << "The number: " << num << endl << endl;

    return 0;
}
