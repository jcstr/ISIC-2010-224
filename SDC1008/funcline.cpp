// Funcion inline
//	hacer el codigo mas eficiente

// parametro por referencia***
// inline void inc(int '''''&i''''') { ++i; }

// parametro por argumento
// inline int select('''int a, int b''') { return a > b ? a : b; }

# include <cstdio>

inline void inc(int &i) { ++i; }
inline int select(int a, int b) { return a > b ? a : b; }

int main()
{
	for (int i = 0; i < 10; inc(i)) 
	{
		printf("Hola Mundo\n");
	}


   return 0;
}
