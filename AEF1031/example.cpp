#include <stdio.h>
#include <stdlib.h>

FILE *Arch;
char c;

int main ()
{
    Arch = fopen("ex.txt", "r");
    
	if (Arch == NULL) {
        printf("file doesn't exist...");
    } else {
		while (feof(Arch) == 0) { //!= TRUE
        	c = fgetc(Arch);
        	printf("%c", c);
    	}
	}

    fclose(Arch);

    return 0;
}
