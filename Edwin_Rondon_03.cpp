#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

//Autor: Edwin Rondón, C.I.: V-31.157.974, Trayecto II, Sección 01.
//Ejercicio N° 3 de Paradigmas de programación.

int main()
{
	FILE *arch;
	int num, i;
	char fruts [10];
	
	if(!(arch = fopen("C:\\FRUTAS.TXT", "a")))
	{
		printf("No se pudo abrir el archivo.\n");
		
		getch();
		
		exit(0);
	}
	else
	{
		if(arch = fopen("C:\\FRUTAS.TXT", "a"))
		{
			printf("Cuantas frutas desea almacenar?\n");
			scanf("%d", &num);
			
			for(i = 1; i <= num; i++)
			{
				printf("Ingrese una fruta: ");
				scanf("%s", fruts);	
			}
			
			rewind(arch);
			
			while(!feof(arch))
			{
				fgets(fruts, 10, arch);
    			fputs(fruts, arch);
    			printf("%s", fruts);
			}
		}
	}
	
	fclose(arch);
	
	getch();
	
	return(0);
	
	//Ay Dios mío no sé qué me pasó aquí :'v
	//Esto está más malo que bueno.
}
