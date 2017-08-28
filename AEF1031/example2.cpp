#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

FILE *Arch;
char c;

int main ()
{
    char str[20];
    Arch = fopen("ex.txt", "w");

    printf("add string: ");
    scanf("%c", &cadena);

    for (int i = 0; i < strlen(str); i++) {
    	fputc(str[i], Arch);
	}
    
	fclose(Arch);

    return 1;
}

