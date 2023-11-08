#include <stdio.h>

int main() {
	int num1, num2;
	
	printf("Ingrese el primer número: ");
	scanf("%d", &num1);
	
	printf("Ingrese el segundo número: ");
	scanf("%d", &num2);
	
	if (num1 > num2) {
		int temp = num1;
		num1 = num2;
		num2 = temp;
	}
	
	int numeros_intermedios[100]; // Cambiado a un tamaño fijo de 100 elementos
	int contador = 0;
	
	// Cambiar el contenido del array a números pares
	for (int i = num1 + 1; i < num2; i++) {
		if (i % 2 == 0) {  // Verificar si i es par
			numeros_intermedios[contador] = i;
			contador++;
		}
	}
	
	if (contador > 0) {
		printf("Números pares intermedios:\n");
		for (int i = 0; i < contador; i++) {
			printf("%d\n", numeros_intermedios[i]);
		}
	} else {
		printf("No hay números pares intermedios.\n");
	}
	
	return 0;
}
