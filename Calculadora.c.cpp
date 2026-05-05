#include <stdio.h>
#include <math.h>

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
	printf ("5. Potencia de un numero\n");
	printf ("6. Raiz de un numero\n");
	printf ("7. Salir\n");
	printf ("Elija una opcion (1-7): ");
	scanf ("%d", &opcion);
	
	while (opcion != 7) {
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
					printf("%.0f / %.0f = %.2f\n", fnum1, fnum2, fnum1 / fnum2);
				}
				break;
			case 5:
				printf ("Ingrese el numero: ");
				scanf ("%d", &num1);
				printf ("Ingrese la potencia: ");
				scanf ("%d", &num2);
				printf ("%d ^ %d = %.0f\n", num1, num2, pow(num1, num2)); // pow() para potencias     
				break;
			case 6: 
				printf ("Ingrese numero: ");
				scanf ("%d", &num1);
				printf ("Ingrese el indice de la raiz: ");
				scanf ("%d", &num2);
				if (num1 < 0) {
					printf ("Error: no se puede calcular raiz de un numero negativo.\n");
				} else {
					printf("Raiz %d de %d = %.2f\n", num2, num1, pow(num1, 1.0/num2));
				}	
				break;		
			default:
				printf("Opcion invalida, elija 1, 2, 3, 4, 5, 6 o 7.\n");
				break;	
		}
		
		printf ("\n=== MENU INTERACTIVO ===\n");
		printf ("1. Sumar dos numeros\n");
		printf ("2. Restar dos numeros\n");
		printf ("3. Multiplicar dos numeros\n");
		printf ("4. Dividir dos numeros\n");
		printf ("5. Potencia de un numero\n");
		printf ("6. Raiz de un numero\n");
		printf ("7. Salir\n");
		printf ("Elija una opcion (1-7): ");
		scanf ("%d", &opcion);
	}
	
	printf ("¡Hasta luego!\n");
	printf ("Suma acumulada: %d\n", suma);
	printf ("Resta acumulada: %d\n", resta);
	printf ("Multiplicacion acumulada: %d\n", multiplicacion);
	return 0;
}
