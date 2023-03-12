#include <stdio.h>
#include <stdlib.h>

main(){
    int total, soma, media, escopo,mais1;
    soma = 0;
    total = 0;
    do{
        printf("Digite um número: ");
        scanf("%d", &escopo);
        soma = soma + escopo;
        printf("\nquer continuar? [0 = no/1 = yes]: ");
        scanf("%d", &mais1);

        total = total + 1;
    } while (mais1 == 1);

    media = soma/total;
    printf("a média de todos os números é de: %d\n", media);

    return 0;
}
