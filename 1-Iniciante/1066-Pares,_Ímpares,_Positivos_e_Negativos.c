#include<stdio.h>
int main (){
    int contp=0,conti=0,contpos=0,contneg=0,valuare,cont;
    for(cont =0;cont<5;cont++){
        scanf("%d",&valuare);
        if(valuare%2==0){
            contp++;
        }else{
            conti++;
        }
        if(valuare>0){
            contpos++;
        }
        if(valuare<0){
            contneg++;
        }
    }
    printf("%d valor(es) par(es)\n",contp);
    printf("%d valor(es) impar(es)\n",conti);
    printf("%d valor(es) positivo(s)\n",contpos);
    printf("%d valor(es) negativo(s)\n",contneg);
    return(0);
}
