#include <cstdio>

/*
    Escribir un programa que lea dos numeros enteros separados por comas
    Hacer que el programa imprima ambos numeros de mayor a menor
    Use el operador ?:
*/

int main()
{
    float valor1;
    float valor2;

    float mayor;
    float menor;

    if(scanf("%f, %f", &valor1, &valor2))
    {
        // Evaloar el valor mayor y el menor
        mayor = valor1 > valor2 ? valor1:valor2;
        menor = valor1 < valor2 ? valor1:valor2;

        printf("Mayor: %f\nMenor: %f\n", mayor, menor);
    }

    return 0;
}
