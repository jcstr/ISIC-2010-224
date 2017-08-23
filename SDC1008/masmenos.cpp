


# include <cstdio>
# include <cstdlib>
# include <ctime>

int main()
{
	srand(time(NULL));
	

	int numeroa, intento = 1, input = 0; 
	numeroa = rand() % 101;
	
// printf("%i\n", numeroa);
	while ( intento <= 6 )
	{
		printf("Intento no. %i: ", intento);
		 scanf("%i", &input);
		intento++;
		if( input == numeroa )
		{
		 	printf("Ganaste!\n"); return 0; // break;
		}
		else if ( input < numeroa )
			{
				printf("<mas>\n");
			} else if ( input > numeroa )
		 		  {
					printf("<menos>\n");
				  }		  
	  } 
	

	printf("perdiste.\nTu numero oculto era: %i\n", numeroa);
	    


   return 0;
}

