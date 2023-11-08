#include <stdio.h>

int main() {
	float sueldos[20];
	int gananMasDe2000 = 0;
	int gananMenosDe2000 = 0;
	
	for (int i = 0; i < 20; i++) {
		printf("Ingrese el sueldo de la persona %d: ", i + 1);
		scanf("%f", &sueldos[i]);
		
		if (sueldos[i] > 2000) {
			gananMasDe2000++;
		} else {
			gananMenosDe2000++;
		}
	}
	
	printf("Personas que ganan más de $2000: %d\n", gananMasDe2000);
	printf("Personas que ganan menos de $2000: %d\n", gananMenosDe2000);
	
	return 0;
}
