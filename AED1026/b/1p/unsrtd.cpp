#include <cstdio>
#include <cstdlib>
#include <iostream>

#define MAX 100

using namespace std;

int v[MAX];
int n = -1;

void insertD(int y)
{
	if (n < MAX - 1) {
		n += 1;
		v[n] = y;
	} else {
		cout << endl << "ERROR! MAX overpassed..." << endl;
	}
}

void deleteD(int x)
{
	int i = 0, k;
	
	while ((i <= n) && (x != v[i])) {
		i++;
	} if (i > n) {
		cout << endl << "EROR! 404..." << endl;
	} else {
		for (k = i; k <= n - 1; k++) {
			v[k] = v[k + 1];
		} 

		k--;
	}
}

void modifyD(int x, int y)
{
	int i = 0;
	
	while ((i <= n) && (x != v[i])) {
		i++;
	} if (i > n) {
		cout << endl <<"ERROR! 404..." << endl;
	} else {
		v[i] = y;
	}
}

void show()
{
	for (int i = 0; i <= n; i++) {
		cout << v[i] << endl;
	}
}

int main()
{
	int opc, x, y;

	do {
		cout << endl;
		cout << "1. Insert" << endl;
		cout << "2. Delete" << endl;
		cout << "3. Modify" << endl;
    	cout << "4. Show" << endl;
   	 	cout << "5. return 0" << endl;

		cout << "Opt: ";
		cin >> opc;

    	switch (opc) { 
    		case 1: 
				cout << "Value to add: ";
    			cin >> x;
    			insertD(x);
				break;
    		case 2:
    			cout << "Value to delete: ";
				cin >> y;
    			deleteD(y);
				break;
    		case 3:
				cout << "Value to modify: ";
				cin >> x;
				cout << "New value: ";
				cin >> y;
    			modifyD(x, y);
				break;
    		case 4:
    			cout << endl << "Showing..." << endl;
    			show();
				cout << endl;
				break;
    	}
	} while (opc != 5 && opc < 5 && opc != 0);

	return 0;
}

