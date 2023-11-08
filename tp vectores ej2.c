#include <stdio.h>

int main() {
	int numeros[5];
	int suma = 0;
	int mayor = 0;
	
	// Solicitar al usuario que ingrese 5 números
	for (int i = 0; i < 5; i++) {
		printf("Ingresa el número %d: ", i + 1);
		scanf("%d", &numeros[i]);
		
		// Sumar los números para calcular el promedio
		suma += numeros[i];
		
		// Determinar el número mayor
		if (numeros[i] > mayor) {
			mayor = numeros[i];
		}
	}
	
	// Calcular el promedio
	float promedio = (float)suma / 5;
	
	// Mostrar los resultados
	printf("El valor promedio de los números ingresados es: %.2f\n", promedio);
	printf("El número mayor de los números ingresados es: %d\n", mayor);
	
	return 0;
}
