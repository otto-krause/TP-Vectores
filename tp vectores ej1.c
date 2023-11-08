
#include <stdio.h>
	int main() {
	int resistencias[5] = {1,2,3,4,5};
	int num = 5;
	float res[1];
	float total = 0.0;
	for (int i = 0; i < num; i++) {
		printf("Ingresa la res %d: ", i + 1);
		scanf("%f", &res[i]);
		total += res[i];
	}
	printf("\nResistencias individuales:\n");
	for (int i = 0; i < num; i++) {
		printf("Res %d: %.2f ohms\n", i + 1, res[i]);
	}
	printf("\nResistencia total: %.2f ohms\n", total);
	return 0;
}
	
