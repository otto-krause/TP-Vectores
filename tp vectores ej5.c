// ej 5
#include <stdio.h>

int main() {
	int ventas[20][15];
	int totalUnidadesVendidas = 0;
	int maxVentaDiaria = 0;
	int vendedorMaxVentaDiaria = -1;
	
	for (int vendedor = 0; vendedor < 20; vendedor++) {
		printf("Vendedor %d:\n", vendedor + 1);
		
		for (int dia = 0; dia < 15; dia++) {
			printf("Ingrese las unidades vendidas en el día %d: ", dia + 1);
			scanf("%d", &ventas[vendedor][dia]);
			totalUnidadesVendidas += ventas[vendedor][dia];
			
			if (ventas[vendedor][dia] > maxVentaDiaria) {
				maxVentaDiaria = ventas[vendedor][dia];
				vendedorMaxVentaDiaria = vendedor;
			}
		}
	}
	
	printf("El total de unidades vendidas en los 15 días es: %d\n", totalUnidadesVendidas);
	printf("El vendedor con la mayor venta diaria es el vendedor %d con %d unidades vendidas en un día.\n", vendedorMaxVentaDiaria + 1, maxVentaDiaria);
	
	return 0;
}
