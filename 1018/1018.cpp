#include <stdio.h>

int main() {
    int celula;
    scanf("%d", &celula);

    printf("%d\n", celula);

    int reais100 = celula / 100;
    celula %= 100;

    int reais50 = celula / 50;
    celula %= 50;

    int reais20 = celula / 20;
    celula %= 20;

    int reais10 = celula / 10;
    celula %= 10;

    int reais5 = celula / 5;
    celula %= 5;

    int reais2 = celula / 2;
    celula %= 2;

    int real1 = celula;

    printf("%d nota(s) de R$ 100,00\n", reais100);
    printf("%d nota(s) de R$ 50,00\n", reais50);
    printf("%d nota(s) de R$ 20,00\n", reais20);
    printf("%d nota(s) de R$ 10,00\n", reais10);
    printf("%d nota(s) de R$ 5,00\n", reais5);
    printf("%d nota(s) de R$ 2,00\n", reais2);
    printf("%d nota(s) de R$ 1,00\n", real1);

    return 0;
}

