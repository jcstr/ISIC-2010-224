#include <iostream>
#include <curses.h>

using namespace std;

struct Nodo {
	float dato;
	Nodo *siguiente;	
};

void insertarLista(Nodo *&,float);
void mostrarLista(Nodo *);
void calcularSumaPromedio(Nodo *);

int main()
{
	Nodo *lista = NULL;
	float dato;
	char opcion;
	
	do {
		cout << "Digite un numero: ";;
		cin >> dato;
		insertarLista(lista,dato);
		cout << endl << "Agregar mas?: (s/n)";
		cin >> opcion;
	} while (opcion == 's' || opcion == 'S');
	
	cout << endl << "Elementos de la lista:" << endl;
	mostrarLista(lista);	
	calcularSumaPromedio(lista); 

	return 0;
}

void insertarLista(Nodo *&lista, float n){
	Nodo *nuevo_nodo = new Nodo();
	Nodo *aux;
	
	nuevo_nodo->dato = n;
	nuevo_nodo->siguiente = NULL;
	
	if (lista == NULL) {
		lista = nuevo_nodo;
	} else { 
		aux = lista; 
		while (aux->siguiente != NULL) { 
			aux = aux->siguiente;
		}
		aux->siguiente = nuevo_nodo;
	}
	cout << "\tElemento " << n << " insertado a lista correctamente" << endl;
}

void mostrarLista(Nodo *lista)
{
	while (lista != NULL) { 
		cout << lista->dato << " -> "; 
		lista = lista->siguiente; 
	}
}

//Calcular suma y promedio de los elementos de la lista
void calcularSumaPromedio(Nodo *lista)
{
	float suma = 0, promedio = 0;
	int contador = 0;
	
	while (lista != NULL) {//mientras no sea el final de la lista
		suma += lista->dato; //suma iterativa
		contador++; //aumentamos el contador de elementos de la lista
		lista = lista->siguiente; //Avanzamos en la lista
	}
	
	promedio = suma / contador;
	
	cout << endl << "[+] La suma es: " << suma << endl;
	cout << "[+] El promedio es: " << promedio << endl;
}
