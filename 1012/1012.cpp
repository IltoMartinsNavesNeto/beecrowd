#include<stdio.h>
#include <math.h> 

int main(){

    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);

    float triangulo = a * c / 2;
    float circulo = 3.14159 * pow(c, 2);
    float trapezio = (a+b) * c / 2;
    float quadrado = pow(b, 2);
    float retangulo = a * b;

    printf("TRIANGULO: %.3f\n", triangulo);
    printf("CIRCULO: %.3f\n", circulo);
    printf("TRAPEZIO: %.3f\n", trapezio);
    printf("QUADRADO: %.3f\n", quadrado);
    printf("RETANGULO: %.3f\n", retangulo);

    return 0;
}
