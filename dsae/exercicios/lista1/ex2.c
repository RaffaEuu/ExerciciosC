#include <stdio.h>
#include <stdlib.h>
#include <math.h>


main(){
    float cA, cB, cC, delta, rdelta, maior, menor;
    printf("Digite o coeficiente A: ");
    scanf("%f", &cA);
    printf("Digite o coeficiente B: ");
    scanf("%f", &cB);
    printf("Digite o coeficiente C: ");
    scanf("%f", &cC);
    
    delta = pow (cB, 2) - 4 * cA * cC;

    if(delta < 0 || cA == 0){
        printf("\n  Esta equacao não possui raizes reais");
        exit(1);
    }

    rdelta = sqrt(delta);

    maior = (-cB + rdelta) / 2 * cA;
    menor = (-cB - rdelta) / 2 * cA;
    printf("X1 = %.4f \nX2 = %.4f \n", maior, menor);
    return 0;
}