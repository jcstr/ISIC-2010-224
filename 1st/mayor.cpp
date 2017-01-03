/*
    Escribir un programa que lea dos numeros e imprima el mayor,
    en caso de ser iguales el programa imprimira dicho valor
*/

# include <cstdio>

int main()
{
    float numero1;
    float numero2;

	scanf("%f%f", &numero1, &numero2);
    
        printf("Mayor: %.2f \n", numero1 >= numero2 ? numero1 : numero2);
    
    return 0;
}
