#include <iostream>
#include <cstdlib>
#include <stack>

using namespace std;

int ackerman(int m, int n)
{
	stack<int> segments;
	while (!segments.empty()) {
		m = segments.top();
		segments.pop();

		if (m == 0) {
			n + 1;
		} else if (n == 0) {
			segments.push(m -1);
			n = 1;
		} else {
			segments.push(m - 1);
			segments.push(m);
			n - 1;
		}
	}
	return n;
}

int main(int argc, char const *argv[])
{
	int x, y;
	cout << "x: ";
	cin >> x;
	cout << "y :";
	cin >> y;

	cout << "El resultado es: " << ackerman(x, y) << endl;

	return 0;
}
