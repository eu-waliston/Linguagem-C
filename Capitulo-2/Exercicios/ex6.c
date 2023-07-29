#include <stdio.h>
int main() {
    float pi = 3.14, raio, res;
    //2pi / raio

    printf("Digite o raio do circulo\n");
    scanf("%f", &raio);
    res = (2 * pi ) / raio;
    printf("O diametro do circulo e: %f\n", res);
}
