#include <stdio.h>

int main(){
	
	int opcion, num1, num2;
	int suma = 0;
	int resta = 0;
	int multiplicacion = 0;
	float fnum1, fnum2;
	
	printf ("=== MENU INTERACTIVO ===\n");
	printf ("1. Sumar dos numeros\n");
	printf ("2. Restar dos numeros\n");
	printf ("3. Multiplicar dos numeros\n");
	printf ("4. Dividir dos numeros\n");
	printf ("5. Salir\n");
	printf ("Elija una opcion (1-5): ");
	scanf ("%d", &opcion);
	
	while (opcion != 5) {
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
			case 3:
				printf ("Ingrese el primer numero: ");
				scanf ("%d", &num1);
				printf ("Ingrese el segundo numero: ");
				scanf ("%d", &num2);
				multiplicacion = multiplicacion + (num1 * num2);
				printf ("%d * %d = %d\n", num1, num2, num1 * num2);
				break;
			case 4:
				printf ("Ingrese el primer numero: ");
				scanf ("%f", &fnum1);
				printf ("Ingrese el segundo numero: ");
				scanf ("%f", &fnum2);
				if (fnum2 == 0){
					printf ("Error: no se puede dividir por cero.\n");
				} else {
					printf("%.2f / %.2f = %.2f\n", fnum1, fnum2, fnum1 / fnum2);
				}
				break;
			default:
				printf("Opcion invalida, elija 1, 2, 3, 4 o 5.\n");
				break;	
		}
		
		printf ("\n=== MENU INTERACTIVO ===\n");
		printf ("1. Sumar dos numeros\n");
		printf ("2. Restar dos numeros\n");
		printf ("3. Multiplicar dos numeros\n");
		printf ("4. Dividir dos numeros\n");
		printf ("5. Salir\n");
		printf ("Elija una opcion (1-5): ");
		scanf ("%d", &opcion);
	}
	
	printf ("¡Hasta luego!\n");
	printf ("Suma acumulada: %d\n", suma);
	printf ("Resta acumulada: %d\n", resta);
	printf ("Multiplicacion acumulada: %d\n", multiplicacion);
	
	return 0;
}
