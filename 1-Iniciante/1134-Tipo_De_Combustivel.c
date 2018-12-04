#include<stdio.h>
#include<stdlib.h>
int main(void){
    int num=0;
    int gas=0,etanol=0,dis=0;
    do{
        scanf("%d",&num);
        if(num == 1){
            etanol++;
        }else if(num == 2){
            gas++;
        }else if(num == 3){
            dis++;
        }
    }while(num != 4);
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n",etanol);
    printf("Gasolina: %d\n",gas);
    printf("Diesel: %d\n",dis);
    return(0);
}
