#include <cstdio>
#include <cstdlib>

struct Agenda {
	char Nombre[15];
	char Apellidos[20];
	long Telefono;

	struct FechaNac {
		int Dia;
		int Mes;
		int Year;
	};

	struct Domicilio {
		char Calle[15];
		int Numero;
		long CP;
		char Ciudad[20];
	};
	bool Soltero;
};

typedef struct Agenda RegAgenda;
RegAgenda ARegAgenda[30];

FILE *Arch;

int main()
{
	Arch = fopen("Registros.dat", "br");

	if (Arch == NULL) {
		fclose(Arch);
		Arch = fopen("Registros.dat", "bw");
	}

	printf("Escriba Nombre: "); scanf("%s", &UnReg.Nombre);
	printf("Escriba Apellido: "); scanf("%s", &UnReg.Apellidos);
	printf("Escriba Telefono: "); scanf("%s", &UnReg.Telefono);
	printf("Escriba fecha de nacimiento:\n");
	printf("\tEscriba dia: "); scanf("%s", &UnReg.FechaNac.Dia);
	printf("\tEscriba mes: "); scanf("%s", &UnReg.FechaNac.Mes);
	printf("\tEscriba año: "); scanf("%s", &UnReg.FechaNac.Year);
	printf("\nEscriba domicilio:\n");
	printf("\tEscriba calle: "); scanf("%i", &UnReg.Domiclio.Calle);
	printf("\tEscriba Numero Exterior: "); scanf("%i", &UnReg.Domicilio.Numero);
	printf("\tEscriba Codigo Postal: "); scanf("%i", &UnReg.Domicilio.CP);
	printf("\tEscriba Ciudad: "); scanf("%i", &UnReg.Domicilio.Ciudad);
	
	fwrite(&UnReg, sizeof(UnReg), 1, Arch);

	fclose(Arch);

	return 1;
}
