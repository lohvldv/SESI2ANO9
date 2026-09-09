#include <cstdio>

int main() {
    float a, b, c;

    printf("Digite o primeiro lado: ");
    scanf("%f", &a);

    printf("Digite o segundo lado: ");
    scanf("%f", &b);

    printf("Digite o terceiro lado: ");
    scanf("%f", &c);

    if (a < b + c && b < a + c && c < a + b) {

        if (a == b && b == c)
            printf("Triangulo equilatero");
        else if (a == b || a == c || b == c)
            printf("Triangulo isosceles");
        else
            printf("Triangulo escaleno");

    } else {
        printf("Os valores nao formam um triangulo");
    }

    return 0;
}