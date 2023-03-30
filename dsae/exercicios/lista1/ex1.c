#include <stdio.h>
#include <stdlib.h>

main(){
    float nota1, nota2;
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    float somanota = nota1 + nota2;
    printf("NOTA FINAL: %.1f", somanota);

    if(somanota < 60){
        printf("\nREPROVADO!");
    }
    return 0;
}
