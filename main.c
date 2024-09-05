#include <stdio.h>
#include <math.h>

int main() {
    double base, expoente, resultado;

    printf("Digite a base: ");
    scanf("%lf", &base);
    printf("Digite o expoente: ");
    scanf("%lf", &expoente);

    resultado = pow(base, expoente);

    printf("%.2lf elevado a %.2lf é: %.2lf\n", base, expoente, resultado);

    return 0;
}
