#include <stdio.h>

int main() {
	int vector[10];
	int suma = 0;
	int producto = 1;
	int promedio;
	int debajoPromedio = 0;
	
	printf("Ingrese 10 elementos del vector:\n");
	

	for (int i = 0; i < 10; i++) {
		printf("Elemento %d: ", i + 1);
		scanf("%d", &vector[i]);
		suma += vector[i];
		producto *= vector[i];
	}
	
	promedio = suma / 10;
	
	for (int i = 0; i < 10; i++) {
		if (vector[i] < promedio) {
			debajoPromedio++;
		}
	}
	
	printf("Suma de los elementos: %d\n", suma);
	printf("Producto de los elementos: %d\n", producto);
	printf("Promedio de los elementos: %d\n", promedio);
	printf("Cantidad de elementos por debajo del promedio: %d\n", debajoPromedio);
	
	return 0;
}
