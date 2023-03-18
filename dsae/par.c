#include <stdio.h>
#include <stdlib.h>

int main(){
    int numero;
    scanf("%d", &numero);
    if (numero % 2 == 0){
        printf("O numero é par!");
    }else{
        printf("O número é impar!");
    }
    
    return 0;
}
