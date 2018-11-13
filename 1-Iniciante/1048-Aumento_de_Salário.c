#include<stdio.h>
int main (){
    float sal=0,aux=0;
    scanf("%f",&sal);
    if(sal<=400){
    	aux = (sal*15)/100;
        printf("Novo salario: %.2f\n", aux + sal);
        printf("Reajuste ganho: %.2f\n",aux);
        printf("Em percentual: 15 %\n");
        return(0);
    }
    if(sal>400 && sal<=800){
    	aux = (sal*12)/100;
        printf("Novo salario: %.2f\n",(aux + sal));
        printf("Reajuste ganho: %.2f\n",aux);
        printf("Em percentual: 12 %\n");
        return(0);
    }
    if(sal>800 && sal<=1200){
    	aux = sal/10;
        printf("Novo salario: %.2f\n",aux + sal);
        printf("Reajuste ganho: %.2f\n",aux);
        printf("Em percentual: 10 %\n");
        return(0);
    }
    if(sal>1200 && sal<=2000){
    	 aux = (sal*7)/100;
        printf("Novo salario: %.2f\n",aux + sal);
        printf("Reajuste ganho: %.2f\n",aux);
        printf("Em percentual: 7 %\n");
        return(0);
    }
    if(sal>2000){
    	 aux = (sal*4)/100;
        printf("Novo salario: %.2f\n",aux + sal);
        printf("Reajuste ganho: %.2f\n",aux);
        printf("Em percentual: 4 %\n");
        return(0);
    }
}
