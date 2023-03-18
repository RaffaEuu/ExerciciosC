#include <stdio.h>
#include <stdlib.h>

int main(){
    int num1, num2, num3;
    printf("digite o primeiro numero inteiro: ");
    scanf("%d", &num1);
    printf("digite o primeiro numero inteiro: ");
    scanf("%d", &num2);
    printf("digite o primeiro numero inteiro: ");
    scanf("%d", &num3);

    if (num1 > num2 && num1 > num3){
        printf("O %d é o maior", num1);
    }else if(num2 > num1 && num2 > num3)
    {
        printf("O %d é o maior", num2);
    }else{

        printf("O %d é o maior", num3);
    }
    
    
    return 0;
}
