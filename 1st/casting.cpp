/* 
	Numero flotante redondeado a entero ex:
	3.5 - 4
*/

# include <cstdio>

// prototipo
// float round(int);

int main()
{
	float ndecimal;
	scanf("%.2f", &ndecimal);
	
		if (ndecimal == .5)
		{
			int entero = ndecimal + .5;
		}
		else (ndecimal == .1 && ndecimal == .2 && ndecimal == .3 && ndecimal == .4);
		{
			 int entero = ndecimal - .4;
			 int entero = ndecimal - .3;
			 int entero = ndecimal - .2;
			 int entero = ndecimal - .1; 
		}
	printf("%i", entero);


}
