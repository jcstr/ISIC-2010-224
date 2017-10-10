#include <iostream>
#include<time.h>
#include<stdlib.h>

using namespace std;


void bubble()
{
	srand(time(NULL));
	int data[100], i, n, step, temp;

	cout << endl << "* Bubble Sort *" << endl;
    n = 3 + (rand() % 10);
	cout << "Numero de Elementos: "<< n << endl;


	for (i = 0; i < n; ++i) {
		data[i] = 1 + (rand() % 51);
        cout << data[i] << " ";
    }

	/* Bubble Sort */
    for (step = 0; step < n - 1; ++step) {
    	for (i = 0; i < n - step - 1; ++i) {
        	if (data[i] > data[i + 1]) {
            	temp = data[i];
            	data[i] = data[i + 1];
            	data[i + 1] = temp;
        	}
    	}
	}

    cout << endl << "Orden Ascendente: ";
    for (i = 0; i < n; ++i) {
		 cout << data[i] << " ";
	}

	cout << endl;
}

void binaria ()
{
	srand(time(NULL));

    int n, array[1000], c, d, t;
	cout << endl << "* Insercion Binaria *" << endl;
  	n = 3 + (rand() % 10);
	cout << " Numero de Elementos:" << n << endl;

  	for (c = 0; c < n; c++) {
		array[c] = 1 + (rand() % 51);
	 	cout << array[c] << " ";
  	}

	for (c = 1 ; c <= n - 1; c++) {
		d = c;
    	while ( d > 0 && array[d] < array[d-1]) {
      		t = array[d];
     	 	array[d]   = array[d - 1];
      		array[d - 1] = t;
      		d--;
    	}
	}
	
	cout << endl << "Lista en Orden Ascendente: ";
	for (c = 0; c <= n - 1; c++) {
    	cout << array[c] << " ";
  	}
  	
	cout << endl;
}

float num[100], n;
void Ordenar()
{
	float temp;
	for (int j = 0; j < n - 1; j++) {
        for (int k = j + 1; k < n; k++){
            if (num[k] < num[j]) {
            	temp = num[k];
            	num[k] = num[j];
            	num[j] = temp;
            }
        }
    }
}
void Mostrar()
{
    for(int i = 0; i < n; i++) {
        cout << num[i] << " ";
    }
}

void mergesort(int *v, int i, int f);
void merge(int *v, int i, int m, int f);
void mergesort(int *v, int i, int f) 
{
	if (i != f) {
  		int m = (i + f) / 2;
  		mergesort(v, i, m);
  		mergesort(v, m + 1, f);
 	 	merge(v, i, m, f);
 	}
}

void merge(int *v, int i, int m, int f) 
{
	int *aux = new int[m - i + 1];
	for (int j = i; j <= m; j++)
 		aux[j - i] = v[j];
	int c1 = 0, c2 = m + 1;
 
	for (int j = i; j <= f; j++) {
		if (aux[c1] < v[c2]) {
   			v[j] = aux[c1++];
   		if (c1 == m - i + 1)
    		for (int k = c2; k <= f; k++)
     			v[++j] = v[k];
  		} else {
   			v[j] = v[c2++];
   			if (c2 == f + 1)
    			for (int k = c1; k <= m - i; k++)
     				v[++j] = aux[k];
  		}
 	}
}

void ordena(int vect[], int izq, int der)
{
	int i = 0, j = 0;
    int x = 0, aux = 0;
    i = izq;
    j = der;
    x = vect [(izq + der) / 2];
    
	do {
    	while ((vect[i] < x) && (j <= der)) {
        	i++;
		}
        
		while ((x < vect[j]) && (j > izq)) {
        	j--;
		}
        
		if (i <= j) {
        	aux = vect[i];
            vect[i] = vect[j];
            vect[j] = aux;
            i++;  
			j--;
        }
    } while (i <= j);
    
	if (izq < j) {
    	ordena(vect, izq, j);
	}
    
	if (i < der) {
    	ordena(vect, i, der);
	}
}

void shaker ()
{
	int shaker_sort[100];
	int aux, n;
	int der, izq, ultimo;

	cout << "* SHAKER SORT *" << endl;

	cout << endl;
    n = 3 + (rand() % 10);
	cout << "Los numeros son : "<< n << endl;

	cout << endl;
	
	for (int i = 0; i < n; i++) {
		shaker_sort[i] = 1 + (rand() % 100);
   		cout << "[" << (shaker_sort[i]) << "] = ";
	}

	izq = 1;
	der = n - 1;
	ultimo = n - 1;

	do {
		for (int i = der; i >= izq; i--) {
			if (shaker_sort[i - 1] > shaker_sort[i]) {
				aux = shaker_sort[i - 1];
				shaker_sort[i - 1] = shaker_sort[i];
				shaker_sort[i] = aux;
				ultimo = i;
			}
	}

	izq = ultimo + 1;

	for (int j = izq; j <= der; j++) {
		if (shaker_sort[j-1] > shaker_sort[j]) {
				aux = shaker_sort[j - 1];
				shaker_sort[j - 1] = shaker_sort[j];
				shaker_sort[j] = aux;
				ultimo = j;
			}
		}

		der = ultimo - 1;

	} while (der >= izq);

	cout<< "Numeros Ordenados:  "<< endl;

	for (int i = 0; i < n; i++) {
		cout << "[" << shaker_sort [i] << " ] ";

	}
}
    
void shell(int A[], int N)
{
	int INT, I, AUX;
	bool BAND;
    INT = N;
    
	while (INT > 1) {
    	INT = (int) INT / 2;
     	BAND = true;
    	
		while (BAND == true) {
            BAND = false;
            I = 0;
            while ((I + INT) < N) {
                if (A[I] > A[I + INT]) {
                	AUX = A[I];
                    A[I] = A[I + INT];
                    A[I + INT] = AUX;
                    BAND = true;
                }
                I++;
            }
        }
    }
}

void leeCadena(int cant, int n[])
{
	int i;
	for (i = 0; i < cant; i++) {
            n[i] = 1 + (rand() % 51);
		cout << "Numero: " << n[i] << endl;
	}
}

void muestraCadena(int cant, int n[]) 
{
	int i;
	for (i = 0; i < cant; i++){
		cout << n[i] << endl;
	}
}

#define largo 50
void insercionDirecta(int A[], int n) 
{
	int i, j, v;

	for (i = 1; i < n; i++) {
		v = A[i];
		j = i - 1;
		while (j >= 0 && A[j] > v){
			A[j + 1] = A[j];
			j--;
		}
		A[j + 1] = v;
	}
}

int main()
{
	int op;
	do {
    	cout << "Opcion: 1 Bubble Sort" << endl; 
	 			 Opcion: 2 Insercion Binaria\n\
				 Opcion: 3 Seleccion Directa\n\
				 Opcion: 4 Ordenacion Merge\n\
			 	 Opcion: 5 Quicksort\n\
			 	 Opcion: 6 Shaker Sort\n\
			 	 Opcion: 7 Ordenacion Shell\n\
			 	 Opcion: 8 Insercion Directa\n\
			 	 Opcion: 9 Salir\n\
			 	 Selecciona una opcion: \n";
		cin >> op;
		if (op == 0 || op > 8) {
			break;
		}

		switch (op) {
			case 1: {
    			bubble();
    		} break;
			case 2: {
    			binaria();
    		} break;
			case 3: {
				srand(time(NULL));
    			cout << "* Seleccion Directa *" << endl;
				
				n = 4 + (rand() % 10);
    			cout << "La Cantidad De Datos es: " << n << endl;
				
				for (int i = 0; i < n; i++) {
        			num[i] = 1 + (rand() % 51);
        			cout << "Los Valores son " <<num[i]<< endl;
    			}
    			cout << "Arreglo Desordenado: " << endl;
   		 		
				Mostrar();
    			Ordenar();
    			
				cout << "\nArreglo Odenado " << endl;
    			Mostrar();
    			
				cout << endl;
    		} break;
			case 4: {
    			srand(time(NULL));
    			cout << "* Ordenacion Merge*"<<endl;
    			int *v, n;
    			
				n = 4 + (rand() % 10);
 				cout << "El tama\xA4o del arreglo es: " << n << endl;
 				v = new int[n];
 				
				for (int i = 0; i < n; i++) {
					v[i] = 1 + (rand() % 51);
					cout << v[i] << endl;
 				}
 				mergesort(v, 0, n - 1);

 				for (int i = 0; i < n; i++)
  					cout << "Ordenacion: " << v[i] << endl;
  			} break;
			case 5: {
    			srand(time(NULL));
    			cout << "* Quicksort *"<< endl;
    			int nn;
    			
				nn = 4 + (rand() % 10);
    			cout << "Tama\xA4o del arreglo es: " << nn << endl;
    			int vv[nn];
    			
				for (int ii = 0; ii < nn; ii++) {
        			vv[ii] = 1 + (rand() % 51);
        			cout << vv[ii] << " ";
    			}
    			cout << endl;
    			ordena(vv,0,nn-1);
    			
				cout << "Arreglo Ordenando" << endl;
				for (int ii = 0; ii < nn; ii++) {
        			cout << vv[ii] << " ";

    			}		
    			cout << endl;
    		} break;
			case 6: {
    			shaker();
    		} break;
			case 7: {
         		srand(time(NULL));
      			int N;
      			N = 4 + (rand() % 10);
    			cout << "Elementos del conjunto: " << N << endl;
    			int V[N];

    			for (int i = 0; i < N; i++) {
        			V[i] = 1 + (rand() % 51);
        			cout << V[i] << endl;
    			}		

    			shell(V, N);
    			cout << "Arreglo ordenado: " << endl;
				for (int i = 0; i < N; i++) { 
        			cout << V[i] << endl;
    			}	
    		} break;
			case 8: {
				srand(time(NULL));
        		int A[largo], n;
			do {
        		n = 4 + (rand() % 10);
				cout << "Cantidad de numeros a ingresar: " << n << endl;

				if (n <= 0 || n > largo)
					cout << "Debe ingresar un valor " << largo << endl;

			} while (n <= 0 || n > largo);

				leeCadena(n,A);
				insercionDirecta(A,n);
				muestraCadena(n,A);
    		}
		}
	} while (true);
}
