#include <string.h>
#include <stdio.h>
#include <stdio.h>
void main()
{
    char scale, *c = "c";
    int foi = 1;
    // float temp, convertido;
    printf("você vai digitar a temperatura em qual escala (C/F)? ");
    scanf("%c", &scale);
    printf("%c", scale);
    // printf("digite a temperatura: ");
    // scanf("%f", &temp);
    foi = strcmp(scale, c);
    // if (strcmp(scale, c) == 0){
    //     printf("VAI SE FUDE");
    // }
}