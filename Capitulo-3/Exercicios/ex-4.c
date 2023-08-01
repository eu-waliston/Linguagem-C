#include <stdio.h>

int main()
{
    int conta;
    float saldo, cobrancas, creditoTotal, limite, flag;

    printf("Entre com o numero da conta (-1 para finalizar): ");
    scanf("%d", &conta);

    while (flag != -1)
    {

        printf("Entre com o saldo inicial R$:  ");
        scanf("%f", &saldo);

        printf("Entre com o total de cobranças R$: ");
        scanf("%f", &cobrancas);

        printf("Entre com o total de créditos: R$: ");
        scanf("%f", &creditoTotal);

        printf("Entre com o limite de credito: R$: ");
        scanf("%f", &limite);

        limite = saldo / creditoTotal;
        flag = flag + 1;

        printf("Entre com o numero da conta (-1 para finalizar): ");
        scanf("%d", &conta);
    }

    if (flag == -1)
    {
        printf("Conta: %d", conta);
        printf("Limite de credito R$: %f", limite);
        printf("Saldo R$: %f", saldo);
        printf("Limite de Credito Excedido :( ");
    }
}
