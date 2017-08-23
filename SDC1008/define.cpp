# include <cstdio>

# define MAX(x,y,z) ((x > y && x > z) ? x : (y > z) ? y: z)

int main()
{
	int a, b, c;
		scanf("%i %i %i", &a, &b, &c);
		printf("mayor: %i\n", MAX(a,b,c));

   return 0;
}
