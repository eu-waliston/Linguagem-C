#include <stdio.h>

int main()
{
    int contador;

    int commissao = 200;
    float salario, vendas;

    while (vendas != -1)
    {
        printf("Entre com a venda em dólares (-1 para finalizar)$:");
        scanf("%f", &vendas);

        salario = (vendas / (100 / 9)) + commissao;
        contador = contador + 1;

        if (contador != 0)
        {
            printf("Seu salario e: $%2.f \n", salario);
        }
    }
}


