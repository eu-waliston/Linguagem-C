//
// Created by we on 31/07/23.
//

#include <stdio.h>
int main() {
    //Inicializando variáveis em declarações
    int aprovacoes = 0, reprovacoes = 0, aluno = 1, resultado;

    //processamento de 10 alunos; loop controlado por contador
    while(aluno <= 10) {
        printf("Entre com o resutlado (1 - aprovado e 2 - reprovado): ");
        scanf("%d", resultado);

        if(resultado == 1) {
            aprovacoes = aprovacoes + 1;
        } else {
            reprovacoes = reprovacoes + 1;
            aluno = aluno + 1;
        }
    }
    printf("Aprovados %d\n", aprovacoes);
    printf("Reprovados %d\n", reprovacoes);
    if(aprovacoes > 8) {
        printf("Cobrar taxa escola\n");

    }
}

