#include <cstdlib>
#include <iostream>

using namespace std;

void imprimirArreglo(int *arreglo, int item) {
      if (item < 0) {
		  return;
	  }
	  
	  imprimirArreglo(arreglo, item - 1);      
	  cout << ' ' << arreglo[item - 1];
}

int main() {
	int arreglo[] = {15, 24, 3 ,12, 6, 6, 17};
	
	imprimirArreglo(arreglo, 7);
	
	return 0;
}
