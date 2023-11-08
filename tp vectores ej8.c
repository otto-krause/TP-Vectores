#include <stdio.h>

int main() {
	int n, primero = 1, segundo = 1, siguiente;
	
	printf("Ingrese el número de términos de la secuencia de Fibonacci a mostrar: ");
	scanf("%d", &n);
	
	printf("Secuencia de Fibonacci: %d, %d", primero, segundo);
	
	for (int i = 2; i < n; i++) {
		siguiente = primero + segundo;
		printf(", %d", siguiente);
		primero = segundo;
		segundo = siguiente;
	}
	
	printf("\n");
	
	return 0;
}
