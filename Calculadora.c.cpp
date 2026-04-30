#include <stdio.h>

int main(){
	
	int opcion, num1, num2;
	int suma = 0;
	int resta = 0;
	
	printf ("=== MENU INTERACTIVO ===\n");
	printf ("1. Sumar dos numeros\n");
	printf ("2. Restar dos numeros\n");
	printf ("3. Salir\n");
	printf ("Elija una opcion (1-3): ");
	scanf ("%d", &opcion);
	
	while (opcion != 3) {
		switch  (opcion) {
			case 1:
				printf ("Ingrese el primer numero: ");
				scanf ("%d", &num1);
				printf ("Ingrese el segundo numero: ");
				scanf ("%d", &num2);
				suma = suma + (num1 + num2);
				printf ("%d + %d = %d\n", num1, num2, num1 + num2);
				break;
			case 2:
				printf ("Ingrese el primer numero: ");
				scanf ("%d", &num1);
				printf ("Ingrese el segundo numero: ");
				scanf ("%d", &num2);
				resta = resta + (num1 - num2);
				printf ("%d - %d = %d\n", num1, num2, num1 - num2);
				break;
			default:
				printf("Opcion invalida, elija 1, 2 o 3.\n");
				break;	
		}
		
		printf ("\n=== MENU INTERACTIVO ===\n");
		printf ("1. Sumar dos numeros\n");
		printf ("2. Restar dos numeros\n");
		printf ("3. Salir\n");
		printf ("Elija una opcion (1-3): ");
		scanf ("%d", &opcion);
	}
	
	printf ("¡Hasta luego!\n");
	printf ("Suma acumulada: %d\n", suma);
	printf ("Resta acumulada: %d\n", resta);
	
	return 0;
}
