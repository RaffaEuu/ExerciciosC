#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main(){
    int cA, cB, cC, delta, menos, mais, rdelta;
    printf("Digite o coeficiente A: ");
    scanf("%d", &cA);
    printf("Digite o coeficiente B: ");
    scanf("%d", &cB);
    printf("Digite o coeficiente C: ");
    scanf("%d", &cC);
    
    delta = pow(cB, 2) - 4 * cA * cC;

    rdelta = sqrt(delta);

    printf("%d", rdelta);
}