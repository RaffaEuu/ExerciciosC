#include <stdio.h>
#include <stdlib.h>

main(){
    float minutos, pagar;
    printf("Digite a quantidade de minutos: ");
    scanf("%f", &minutos);
    if(minutos <= 100){
        pagar = 50;
    }else{
        minutos = minutos - 100;
        pagar = 50 + minutos * 2.00;
    }
    printf("Valor a pagar: R$%.2f", pagar);
}