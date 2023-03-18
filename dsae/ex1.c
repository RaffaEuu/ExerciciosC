#include <stdio.h>
#include <stdlib.h>

void main(){
    int num1, num2;
    printf("Digite um número inteiro: ");
    scanf("%d", &num1);
    printf("Digite um número inteiro: ");
    scanf("%d", &num2);

    if (num1 > num2){
        printf("%d é maior que %d", num1, num2);
    }else if(num2 > num1){
        printf("%d é maior que %d", num2, num1);
    }else{
        printf("%d é igual %d", num1, num2);
    }
    
    return 0;
}
