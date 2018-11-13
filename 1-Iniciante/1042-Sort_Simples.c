#include<stdio.h>
int main (){
    int vet[3],aux,vet2[3];
    scanf("%d %d %d",&vet[0],&vet[1],&vet[2]);
    vet2[0] = vet[0];
    vet2[1] = vet[1];
    vet2[2] = vet[2];
    if(vet[0]>vet[1]){
        aux = vet[1];
        vet[1] = vet[0];
        vet[0] = aux;
    }
    if(vet[1]>vet[2]){
        aux = vet[2];
        vet[2] = vet[1];
        vet[1] = aux;
    }
    if(vet[0]>vet[1]){
        aux = vet[1];
        vet[1] = vet[0];
        vet[0] = aux;
    }
    printf("%d\n%d\n%d\n\n%d\n%d\n%d\n",vet[0],vet[1],vet[2],vet2[0],vet2[1],vet2[2]);
    return(0);
}
