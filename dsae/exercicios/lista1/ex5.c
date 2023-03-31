#include <stdio.h>
#include <stdlib.h>

void main(){
    float glicose;
    printf("Digite a medida da glicose: ");
    scanf("%f", &glicose);
    if(glicose<=100){
        printf("Classificação: Normal");

    }else if(100 > glicose && glicose <=  140){
        printf("Classificação: elevado");
    }else{
        printf("Classificação: Diabetes");
    }   
}