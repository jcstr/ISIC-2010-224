// arreglar cuando sea menor o igual igual 
//  cuando es igual a m entonces no excede

# include <cstdio>

int main()
{
	int m, n = 0, suma = 0;
	
	   scanf("%i", &m);
		
		do
		{	
       	 		suma += n;
        		n++;
    		} while ( suma + n < m );
		if ( suma + n == m )
		{
			printf("%i\n", n );
		} else printf("%i\n", n - 1 );

   return 0;
}
