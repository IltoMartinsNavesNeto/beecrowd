#include <stdio.h>

int main() {
	
	float horas, kmH;
	scanf("%f %f", &horas, &kmH);
	
	float litros = (horas * kmH)/ 12;
	printf("%.3f\n", litros);
	
	return 0;
}
