#include <cstdio>
#include <cstdlib>
#include <iostream>

#define MAX 100

using namespace std;

int v[MAX];
int n = -1;

void insertarDesordenado(int y)
{
	if (n < MAX - 1) {
		n += 1;
		v[n] = y;
	} else {
		cout << endl << "NO hay espacio..." << endl;
	}
}

void eliminarDesordenado(int x)
{
	int i = 0, k;
	
	while ((i <= n) && (x != v[i])) {
		i++;
	}

	if (i > n) {
		cout << endl << "EROR! el valor no se encuentra..." << endl;
	} else {
		for (k = i; k <= n - 1; k++) {
			v[k] = v[k + 1];
		} 
		
		k--;
	}
}

void modificarDesordenado(int x, int y)
{
	int i = 0;
	
	while ((i <= n) && (x != v[i])) {
		i++;
	}
	
	if (i > n) {
		cout << endl <<"ERROR! el valor no se encuentra..." << endl;
	} else {
		v[i] = y;
	}
}

void mostrarArreglo()
{
	for (int i = 0; i <= n; i++) {
		cout << v[i] << endl;
	}
}

int main()
{
	int opc, x, y;

	do {
		cout << endl << "Arreglos Desordenados" << endl;
		cout << endl;
		cout << "1. Insertar" << endl;
		cout << "2. Eliminar" << endl;
		cout << "3. Modificar" << endl;
    	cout << "4. Mostrar" << endl;
   	 	cout << "5. Salir" << endl;

		cout << "Opc: ";
		cin >> opc;

    	switch (opc) { 
    		case 1: 
				cout << "Valor a Insertar: ";
    			cin >> x;
    			insertarDesordenado(x);
				
				break;
    		case 2:
    			cout << "Valor a eliminar: ";
				cin >> y;
    			eliminarDesordenado(y);
    			
				break;
    		case 3:
				cout << "Valor a modificar: ";
				cin >> x;
				cout << "Nuevo valor: ";
				cin >> y;
    			modificarDesordenado(x, y);
    			
				break;
    		case 4:
    			cout << endl << "Mostrando..." << endl;
    			mostrarArreglo();
				cout << endl;
    			
				break;
    	}
	} while (opc != 5 && opc < 5 && opc != 0);

	return 0;
}

