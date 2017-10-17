#include <stdio.h>

int main() {
	int menu;
	do{
		printf("MENU:\n1-suma\n2-resta\n3-salir\n");
		printf("ingresa numero a elegir:\n");
		scanf("%i",&menu);
		switch(menu){
		case 1:
			puts("SUMA");
			int suma, num1, num2;
			printf("Ingresa un numero:\n");
			scanf("%i",&num1);
			printf("Ingresa un segundo numero:\n");
			scanf("%i",&num2);
			suma=num1+num2;
			printf("El resultado es: %i\n",suma);
		break;
		case 2:
			puts("RESTA");
			int resta, res1, res2;
			printf("Ingresa un numero:\n");
			scanf("%i",&res1);
			printf("Ingresa un segundo numero:\n");
			scanf("%i",&res2);
			resta=res1-res2;
			printf("El resultado es: %i\n",resta);
		break;
		case 3:
			puts("Salinedo del programa...");
		break;
		default: puts("caracter invalido");
		}
	}while(menu != 3);
	return 0;
}

