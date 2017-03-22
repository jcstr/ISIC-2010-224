#include <cstdio>
#include <cstdlib>
#include <ctime>

// Cambiar el hpp por cpp ya que aqui se va a trabajar con la clase ya hecha
#include "stackh.cpp"

int main(/*int argc, const char * argv[]*/) {
	
	srand((unsigned)time(NULL));

	stack pila(10);
	

	int n = rand() % 20 + 1; // genera numero aleatorio de 1 a 20

	printf("%i datos:\n\n", n);

	for (int i = 0; i < n; i++) {
		int data = rand() % 100 + 1;
		printf("Push: %i\n", data);

		pila.push(data);
	}

	printf("Vaciando la pila\n\n");

	while (!pila.empty()) {
		printf("Pop: %i\n", pila.pop());
	}
	

	return 0;
}
