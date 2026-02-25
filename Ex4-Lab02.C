#include <stdio.h>

int triangulo_existe(float a, float b, float c) {
    return (a < b + c) && (b < a + c) && (c < a + b);
}

void apresentar_resultado(float a, float b, float c, int existe) {
    if (existe)
        printf("Os lados %.2f, %.2f e %.2f FORMAM um triangulo valido.\n", a, b, c);
    else
        printf("Os lados %.2f, %.2f e %.2f NAO formam um triangulo valido.\n", a, b, c);
}

int main() {
    float a, b, c;

    printf("Digite o lado a: ");
    scanf("%f", &a);
    printf("Digite o lado b: ");
    scanf("%f", &b);
    printf("Digite o lado c: ");
    scanf("%f", &c);

    int existe = triangulo_existe(a, b, c);
    apresentar_resultado(a, b, c, existe);

    return 0;
}
