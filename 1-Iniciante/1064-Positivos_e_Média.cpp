#include<stdio.h>
#include<stdlib.h>

int main(){
    int qtdPositivos = 0;
    float media;
    float valor;
    float somador = 0;
    for(int i = 0 ; i < 6 ; i++){
        scanf("%f",&valor);
        if(valor > 0){
            qtdPositivos++;
            somador+=valor;
        }
    }
    printf("%d valores positivos\n",qtdPositivos);
    printf("%.1f\n",somador/qtdPositivos);
    return 0;
}
