#include <iostream>

// Libreria para el uso de cadenas de caracteres (strings)
#include <cstring>

using namespace std;

// Estructura (molde) para crear a una persona
struct persona
{
	// Atributos de una persona (variables que conforman a una "persona")
	string nombre;
	unsigned int edad;
	unsigned int peso;
	float altura;
	
	// Constructor de una persona (darle valores iniciales a cada variable)
	persona()
	{
		nombre = "STUB";
		edad = 0;
		peso = 0;
		altura = 0;
	}
};

int main()
{
	// de la estructura persona, crear un conjunto de 2 personas
	struct persona personas[2];
	
	// Mostrar los valores previamente asignados del conjunto personas
	cout << "Mostrar Datos iniciales: " << endl;
	for(int i=0; i <2; i++)
	{
		cout << "Persona: " << i + 1 << endl << endl;
		cout << "Nombre: " << personas[i].nombre << endl;
		cout << "Edad: " << personas[i].edad << endl;
		cout << "Altura: " << personas[i].altura << endl;
		cout << "Peso: " << personas[i].peso << endl;
	}
	
	cout << endl;
	
	// Ingresar los datos de las personas
	cout << "Agregar datos: " << endl;
	for(int i=0; i <2; i++)
	{
		cout << "Persona: " << i + 1 << endl;
		cout << "Ingrese nombre: ";
		cin >> personas[i].nombre;
		
		cout << "Ingrese edad: ";
		cin >> personas[i].edad;
		
		cout << "Ingrese altura: ";
		cin >> personas[i].altura;
		
		cout << "Ingrese peso: ";
		cin >> personas[i].peso;
		
		cout << endl;
	}
	
	cout << endl;
	
	// Mostrar los datos de las personas
	cout << "Mostrar datos: " << endl;
	for(int i=0; i <2; i++)
	{
		cout << "Persona: " << i + 1 << endl;
		cout << "Nombre: " << personas[i].nombre << endl;
		cout << "Edad: " << personas[i].edad << endl;
		cout << "Altura: " << personas[i].altura << endl;
		cout << "Peso: " << personas[i].peso << endl << endl;
	}
	
	return 0;
}
