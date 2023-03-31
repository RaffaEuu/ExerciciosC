#include <stdio.h>
#include <stdlib.h>

void main(){
    float valor, recebido;
    int qnt;

    printf("Preço unitário do produto: R$");
    scanf("%f", &valor);
    printf("Quantidade comprada: ");
    scanf("%d", &qnt);
    printf("Dinheiro recebido: R$");
    scanf("%f", &recebido);

    float vtot = valor * qnt;
    float troco = recebido - vtot;

    if(troco < 0){
        float falta = troco * -1;

        printf("DINHEIRO INSUFICIENTE. FALTAM %.2f REAIS", falta);
        exit(1);
    }
    printf("TROCO = R$%.2f", troco);
}