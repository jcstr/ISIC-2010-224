# include <cstdio>

int main()
{
	int m;

	printf("      1   2   3   4   5   6   7   8   9  10\n");
	printf("--------------------------------------------\n");


		for(int i =1; i < 11; i++)
		{
			if ( i < 10 )
			{
				printf(" %i:  ", i);
			} else printf("%i:  ", i);
			
			for ( int j = 1; j < 11; j++ )
			//	m = i * j;
			{
				if ( i * j < 10 )
				{
				//	m = i * j;
					// = j * i;
	
					printf( " %i   ", i * j );
				} else printf( "%i  ", i * j );
				if ( i * j == 100 )
				{
					printf("%3i" i * j );
				}	
			}
			printf("\n");
		}
	
   return 0;
}
