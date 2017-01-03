/*
    Divisas
    Escribir un programa que calcule una conversion de dolares a pesos: debera leer algun monto en dolares e imprimir su equivalente
    en pesos
*/

# include <stdio.h>

int main()
{
    float divisa;
    float equivalencia;

      printf("Ingrese cantidad en dolares:\n");
      scanf("%f", &divisa);

    equivalencia = divisa * 13.1803;

    printf("Equivalencia en pesos:\n");
    printf("%.2f", equivalencia);


    return 0;
}

