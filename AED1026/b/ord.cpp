#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

#define MAX 100

int v[MAX];
int n = -1;

int search(int x)
{
	int i = 0;
	
	while ((i <= n) && (v[i] < x)) {
		i++;
	} if ((i >= n) || (v[i] > x)) {
		return -i;
	} else {
		return i;
	}
}

void orderedIns(int x)
{
	int i, pos;

	if ((n + 1) < MAX) {
		pos = search(x);	 
		if (pos > 0) {
			cout << "Already Exists..." << endl;
		} else {
			pos *= -1;
			n += 1;
			for (i = n; i >= (pos + 1); i--) {
				v[i] = v[i - 1];
			}
				v[pos] = x;
		} 
	} else {
		cout << "ERROR! it can't be added..." << endl;
	}
}


void orderedDel(int x)
{
	int i, pos;
	
	if (n > -1) {
		pos = search(x);
		
		if (pos < 0) {
			cout << "ERROR! it doesn't exist..." << endl;
		} else {
			n -= 1;
			for (i = pos; i <= n; i++) {
				v[i] = v[i + 1];
			}
		}
		cout << "EMPTY!..." << endl;	
	}
}

void orderedMod(int x, int y)
{
	int pos;
	
	pos = search(x);
			    
	if (pos >= 0) {
		orderedDel(x);
		orderedIns(y);
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
	int x, y, opt;
	
	do {
		cout << endl << "Ordered Arrays" << endl;
		cout << "1. Add" << endl;
		cout << "2. Delete" << endl;
		cout << "3. Modify" << endl;
		cout << "4. Show" << endl;
		cout << "5. return 0" << endl;
		
		cout << endl <<"Opt: ";
		cin >> opt;

		switch(opt) {
			case 1: 
				cout << "Value to add: ";
				cin >> x;
				orderedIns(x);
				break;
			case 2: 
				cout << "Value to delete: ";
				cin >> y;
				orderedDel(y);
				break;
			case 3:
				cout << "Value to modify: ";
				cin >> x;
				cout << "New value: ";
				cin >> y;
				orderedMod(x, y);
				break;
			case 4: 
				cout << endl << "Showing..." << endl;
				show();
				break;
			}

		} while (opt != 5 && opt < 5 && opt != 0); 

	return 0;
}

