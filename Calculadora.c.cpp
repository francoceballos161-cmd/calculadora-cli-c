#include <stdio.h>
#include <math.h>

int main(){
	
	int opcion, num1, num2;
	int suma = 0;
	int resta = 0;
	int multiplicacion = 0;
	float fnum1, fnum2;
	float area = 0;
	
	printf ("=== MENU INTERACTIVO ===\n");
	printf ("1. Sumar dos numeros\n");
	printf ("2. Restar dos numeros\n");
	printf ("3. Multiplicar dos numeros\n");
	printf ("4. Dividir dos numeros\n");
	printf ("5. Potencia de un numero\n");
	printf ("6. Raiz de un numero\n");
	printf ("7. Geometria\n");
	printf ("8. Salir\n");
	printf ("Elija una opcion (1-8): ");
	scanf ("%d", &opcion);
	
	while (opcion != 8) {
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
			case 7: // Geometria en el menu principal
				printf ("=== GEOMETRIA ===\n");
				printf ("1. Rectangulo\n");
				printf ("2. Circulo\n");
				printf ("Elija una opcion (1-2): ");
				int opGeo; // Variable nueva solo para el submenu
				scanf ("%d", &opGeo);
				
				switch (opGeo) {
					case 1: 
						printf ("Ingrese base del rectangulo: ");
						scanf ("%f", &fnum1);
						printf ("Ingrese altura del rectangulo: ");
						scanf ("%f", &fnum2);
						area = fnum1 * fnum2;
						printf ("El area del rectangulo es: %.2f\n", area);
						printf ("Perimetro del rectangulo: %.2f\n", 2 * (fnum1 + fnum2)); 	
						break;
					case 2: 
						printf ("Ingrese el radio del circulo: ");
						scanf ("%f", &fnum1);
						printf ("Area del circulo: %.2f\n", M_PI * pow(fnum1, 2)); //Valor de Pi definido en math.h
						printf ("Perimetro del circulo: %.2f\n", 2 * M_PI * fnum1); // 2 * Pi * radio
				}
				break;
			default:
				printf("Opcion invalida.\n");
				break;	
		}
		printf ("\n=== MENU INTERACTIVO ===\n");
		printf ("1. Sumar dos numeros\n");
		printf ("2. Restar dos numeros\n");
		printf ("3. Multiplicar dos numeros\n");
		printf ("4. Dividir dos numeros\n");
		printf ("5. Potencia de un numero\n");
		printf ("6. Raiz de un numero\n");
		printf ("7. Geometria\n");
		printf ("8. Salir\n");
		printf ("Elija una opcion (1-8): ");
		scanf ("%d", &opcion);
	}
	printf ("¡Hasta luego!\n");
	printf ("Suma acumulada: %d\n", suma);
	printf ("Resta acumulada: %d\n", resta);
	printf ("Multiplicacion acumulada: %d\n", multiplicacion);
	return 0;
}
