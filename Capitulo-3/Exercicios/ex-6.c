#include <stdio.h>

int main()
{
    int contador, dias;
    float emprestimo, juros;

    while (emprestimo != -1)
    {
        contador = contador + 1;
        printf("Entre com o valor do emprestimo (-1 para finalizar) R$: ");
        scanf("%f", &emprestimo);
        printf("Entre com a porcentagem de juros: ");
        scanf("%f", &juros);
        printf("Entre com o periodo do emprestimo em dias: ");
        scanf("%d", &dias);
    }

    if (contador != 0)
    {
        printf("O valor em juros sera R$: %f", juros);
    }
}
