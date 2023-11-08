#include <stdio.h>
 int main (){
	float notas[30];
	float suma =0.0;
	for (int i = 0; i < 30; i++){
		printf("ingresa la nota del alumno %d:",i + 1);
	scanf("%f",&notas[i]);
	suma +=notas[i];
 }
	float promedio = suma / 30;
	prinf("el promedio general del curso es de:%.2f\n",promedio);
	return 0;
 }
