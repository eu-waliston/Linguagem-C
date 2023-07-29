#include <stdio.h>

int main() {
    int n1,n2, op;
    printf("Digite o primeiro numero:\n");
    scanf("%d", &n1);
    printf("Digite o primeiro numero:\n");
    scanf("%d", &n2);
    printf("\n----Eis aqui os resultados----\n\n");
    op = n1 % n1;
    printf("%d + %d = %d\n",n1, n2, (n1+n2));
    printf("%d - %d = %d\n",n1, n2, (n1-n2));
    printf("%d * %d = %d\n",n1, n2, (n1+n2));
    printf("%d / %d = %d\n",n1, n2, (n1/n2));
    printf("%d resto da divisao por  %d = %d\n",n1, n2, (n1%n2));

}
