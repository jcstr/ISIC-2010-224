/* 
		Jesus Castro 
	Escribir un programa que lea un entero positivo n. Hacer que el programa calcule la serie armónica hasta n términos.
*/

# include <cstdio>

int main()
{
	int n;
	float armonica = 0;

	 scanf("%i", &n);
	
		
		if ( n > 0 )
		{ 
			for ( int i = 1; i <= n ; i++ )
			armonica += (1.0 / i); 
		
				printf("%.4f\n", armonica);  
		
		}else printf("Error, debe ser entero positivo\n");

   return 0;
}
