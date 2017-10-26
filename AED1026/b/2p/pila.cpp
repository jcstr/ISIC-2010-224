#include <iostream>
#include <cstdlib>

using namespace std;
 
struct nodo {
	int nro;
	struct nodo *sgte;
};
 
typedef struct nodo *Puntero;
 
class Pila {
    public:
        Pila(void);
        void Apilar(int );
        int Desapilar(void );
        void Cima(void);
        bool PilaVacia(void);
        void MostrarPila(void);
        void DestruirPila(void);
 
    private:
        Puntero cima;
 
};

Pila::Pila(void)
{
    cima = NULL;
}
 
bool Pila::PilaVacia(void)
{
    if (cima == NULL)
        return true;
    else
        return false;
}
 
void Pila::Apilar(int x)
{ 
    Puntero p_aux;
    p_aux = new(struct nodo);
    p_aux->nro = x;
    p_aux->sgte = cima;
    cima = p_aux;
}
 
void Pila::Cima()
{
    int x;
    if (cima == NULL) {
        cout << "\n\n\tPila Vacia...!";
 	} else {
        x = cima->nro;
        cout << "\n\tLa Cima es :" << x << endl;
    }
}
 
int Pila::Desapilar(void)
{
    int x;
    Puntero p_aux;
    
	if (cima == NULL) {
        cout << "\n\n\tPila Vacia...!!";
	} else {
        p_aux = cima;
        x = p_aux->nro;
        cima = cima->sgte;
        delete(p_aux);
    }
    return x;
}
 
void Pila::MostrarPila(void)
{
    Puntero p_aux;
    p_aux = cima;
 
    while (p_aux != NULL) {
        cout << "\t " << p_aux->nro << endl;
        p_aux = p_aux->sgte;
    }
}
 
void Pila::DestruirPila(void)
{
    Puntero p_aux;
 
    while (cima != NULL) {
		p_aux = cima;
        cima = cima->sgte;
        delete(p_aux);
    }
}
void menu(void)
{
	cout<<"\t -------------------------------------------\n";
    cout<<"\t|        IMPLEMENTACION DE UNA PILA         |\n";
    cout<<"\t|-------------------------------------------|\n";
    cout<<" \t|                                           |"<<endl;
    cout<<" \t|  1. APILAR                                |"<<endl;
    cout<<" \t|  2. DESAPILAR                             |"<<endl;
    cout<<" \t|  3. MOSTRAR PILA                          |"<<endl;
    cout<<" \t|  4. DESTRUIR PILA                         |"<<endl;
    cout<<" \t|  5. MOSTRAR CIMA                          |"<<endl;
    cout<<" \t|  6. SALIR                                 |"<<endl;
    cout<<" \t|                                           |"<<endl;
    cout<<"\t -------------------------------------------\n";
    cout<<"\t Ingrese opcion: ";
}
 
int main(void )
{ 
    system("color 0a");
    Pila pila;
    int x;
    int op;
 
    do {
        menu();  
		cin >> op;
 
        switch(op) {
            case 1: cout << "\n\t INGRESE NUMERO A APILAR: "; 
					cin >> x;
                    pila.Apilar(x);
                    cout << "\n\n\t\tNumero " << x << " apilado...\n\n";
                    break;
            case 2:
                    if (pila.PilaVacia() == true) {
                        cout<<"\n\n\tPila Vacia....";
					} else {
                        x = pila.Desapilar();
                        cout << "\n\n\tNumero " << x << " desapilado\n";
                    }
                    break;
            case 3:
                    cout << "\n\n\t MOSTRANDO PILA\n\n";
                    if(pila.PilaVacia()!=true)
                        pila.MostrarPila(  );
                    else
                        cout<<"\n\n\tPila vacia..!"<<endl;
                    break;
 
 
            case 4:
                    pila.DestruirPila(  );
                    cout<<"\n\n\t\tPila eliminada...\n\n";
                    break;
            case 5:
                    pila.Cima();
                    break;
         } 
 
        cout << endl << endl;
    } while (op != 6);
 
return 0;
}
