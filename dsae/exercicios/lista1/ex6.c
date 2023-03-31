#include <stdio.h>
#include <stdlib.h>

main(){
    float num1, num2, num3;
    printf("Digite as tres distancias:\n");
    scanf("%f", &num1);
    scanf("%f", &num2);
    scanf("%f", &num3);

    if (num1 > num2 && num1 > num3){
        printf("MAIOR DISTANCIA: %.2f", num1);
    }else if(num2 > num1 && num2 > num3){
        printf("MAIOR DISTANCIA: %.2f", num2);
    }else{

        printf("MAIOR DISTANCIA: %.2f", num3);
    }
    
    
    return 0;
}
