/*
    Escriba un programa que calcule su salario neto para ello el programa debera leer el pago por horas
    cantidad de horas trabajadas y tasa de deducciones
*/

# include <cstdio>

int main()
{
    float paga, horas, deducciones;
	
	printf("Ingrese su paga por horas, cantidad de horas trabajadas y las deducciones:\n");
	scanf("%f%f%f", &paga, &horas, &deducciones);
    
        paga = paga * horas;
        paga = paga - (paga * (deducciones/100));

        printf("Salario Neto: %.2f\n", paga);

    return 0;
}
