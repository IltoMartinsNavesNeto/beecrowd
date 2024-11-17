#include<stdio.h>

int main() {
	
	float x, y;
	scanf("%f %f", &x, &y);
	
	float kmL = x / y;
	
	printf("%.3f km/l\n", kmL);
	
	return 0; 
}
