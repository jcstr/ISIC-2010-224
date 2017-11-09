#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
typedef int TipoDato;

struct node {
    TipoDato inf;
    struct node *next;
};

typedef struct node *Lista;

void InicializarLista(Lista &p)
{
    p = NULL;
}

bool ListaVacia(Lista p)
{
    return(p == NULL);
}

void CrearInicio(Lista &p)
{
    int res;
    Lista q;
    p = new node;
    
    cout << "Escriba el valor del nodo: ";
    cin >> p -> inf;
    p -> next = NULL;
    cout << "Deseas agregar mas nodos?: [Si = 1 / No = 2] ";
    cin >> res;

    while (res == 1) {
        q = new node;
        q -> next;
        cout << "Escribe el valor del nodo: ";
        cin >> q -> inf;
        q -> next = p;
        p = q;
        cout << "desea agregar un nuevo nodo?: [Si = 1 / No = 2] ";
        cin >> res;
    }
}

void Insertarinicio(Lista &p, TipoDato x )
{
    Lista Q;
    Q = new node;
    Q -> inf = x;
    Q -> next;
    p = Q;
}

void MostrarLista(Lista p)
{
    Lista Q;
    Q = p;
    while (Q != NULL) {
        cout << " [ " << Q -> inf << " ] ";
        Q = Q -> next;
    }
}

void InsertarFinal(Lista &p, TipoDato x)
{
    Lista Q,T;
    
    if (ListaVacia(p) != true) {
        T = p;
        while (T ->next != NULL) {
            T = T -> next;
        }
    }

    Q = new node;
    Q -> inf = x;
    Q -> next = NULL;

    if (ListaVacia(p) != true) {
        T -> next = Q;
    } else {
        p = Q;
    }
}

void InsertarAntes(Lista &p, TipoDato dato, TipoDato refe)
{
    Lista Q,T,X;
    bool band = false;
    
    if (ListaVacia(p) == true) {
        cout << "La lista esta vacia";
        
    } else {
        Q = p;
        
        while ((Q -> inf != refe) && (band == false)) {    

        }
    }
}

int main()
{
    int i;
    Lista A;
    InicializarLista(A);
    
    for (i = 0; i <= 20; i++) { 
        InsertarFinal(A,i);
    }

    //CrearInicio(A);
    MostrarLista(A);

    return 0;
}
