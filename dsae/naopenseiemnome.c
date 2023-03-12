#include <stdio.h>
#include <stdlib.h>

void main(){
    int num1, num2, soma;
    printf("digite um numero: ");
    scanf("%d", &num1);
    printf("digite um número: ");
    scanf("%d", &num2);
    soma = num1 + num2;
    printf("a = %d \nb = %d\nsoma = %d\n", num1, num2, soma);
    return 0;
}
