/*
 *	main.cpp
 */

#include <iostream>

//using namespace std;

/* bool find(std::set<int> &s, int x) {

	return s.find(x) != s.end();
}*/

class set: public std::set<int> {

public: bool find(int x) {
		return std::set<int>::find(x) != end();
	}
};

int main(int argc, const char * argv[]) {

	set M;

	M.insert(10);
	M.insert(7);
	M.insert(15);
	M.insert(8);
	M.insert(4);
	
	if (M.find(9) != M.end()) {
		printf("9 ok\n");
	}

	if (M.find(10) != M.end()) {
		printf("10 ok\n");
	}

	if (M.find(12) != M.end()) {
		printf("12 ok\n");
	}


	for (int i = 1; i <= 20; i++) {
		if (/* M.find(i) != M.end() */ /* find(M, i) */ M.find(i)) {
			printf("%i ok\n");
		}
	} 

	return 0;
}
