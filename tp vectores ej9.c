#include <stdio.h>

int main() {
	int numeros[100];
	int n;
	int orden = 0;
	int suma = 0;
	
	printf("Ingrese una lista de números (0 para terminar):\n");
	
	scanf("%d", &numeros[0]);
	n = 1;
	
	while (numeros[n - 1] != 0) {
		scanf("%d", &numeros[n]);
		n++;
	}
	
	for (int i = 1; i < n - 1; i++) {
		if (numeros[i] > numeros[i - 1]) {
			if (orden == 0) {
				orden = 1; 
			} else if (orden == -1) {
				orden = 2;
				break;
			}
		} else if (numeros[i] < numeros[i - 1]) {
			if (orden == 0) {
				orden = -1; 
			} else if (orden == 1) {
				orden = 2; 
				break;
			}
		}
	}
	

	if (n >= 3 && orden != 2) {
		suma = numeros[0] + numeros[n - 2];
	}
	
	
	if (orden == 1) {
		printf("La lista está en orden ascendente.\n");
	} else if (orden == -1) {
		printf("La lista está en orden descendente.\n");
	} else {
		printf("La lista está desordenada.\n");
	}
	
	if (suma != 0) {
		printf("La suma entre el primer y el último número ingresado es: %d\n", suma);
	} else {
		printf("No se pudo calcular la suma.\n");
	}
	
	return 0;
}
