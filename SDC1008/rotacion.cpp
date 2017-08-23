/*
    Escriba un programa que lea tres variables enteras a, b, c
    y haga un programa que reasigne los valores de la siguiente manera
    a = b
    b = c
    c = a
*/

# include <cstdio>

int main()
{
    float valor[3];
    float aux;

    for(int i=0; i<3; i++)
    {
        scanf("%f", &valor[i]);
    }

    aux = valor[0];
    valor[0] = valor[1];
    valor[1] = valor[2];
    valor[2] = aux;

    for(int i=0; i<3; i++)
    {
        printf("%c): %f\n", char(i + 97), valor[i]);
    }

    return 0;
}
