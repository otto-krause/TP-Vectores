#include <stdio.h>

int main() {
	int notas[15];
	
	for (int i = 0; i < 15; i++) {
		printf("Ingrese la nota del alumno %d: ", i + 1);
		scanf("%d", &notas[i]);
	}
	
	printf("Alumnos con notas mayores a 8:\n");
	for (int i = 0; i < 15; i++) {
		if (notas[i] > 8) {
			printf("Alumno %d, Nota: %d\n", i + 1, notas[i]);
		}
	}
	
	return 0;
}

