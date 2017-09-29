#include <iostream>

using namespace std;

bool esPalindromo(string cadena, int size){
    for (int i = 0; i < size / 2; i++) {
        if (cadena[i] != cadena[size - i - 1]) {
            return false;
		}
	return true;
	}
}

int main(){
    string cadena;
    
	cout << "Ingresa la cadena: ";
    getline(cin, cadena);    
    
	esPalindromo(cadena, cadena.length()) ? 
    cout << "\nEs palindromo \n" : cerr << "\nNo es palindromo \n";    
    
	cin.get();
    cin.get();
    
	return 0;    
}

