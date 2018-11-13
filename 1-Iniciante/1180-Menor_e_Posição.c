#include<stdio.h>
#include<stdlib.h>
int main (){
	int n;
	scanf("%d",&n);
	int k,aux,cont,casa;
	for(cont=0;cont<n;cont++){
		if(cont == 0){
			scanf("%d",&k);
			aux=k;
		}
		if(cont != 0){
			scanf("%d",&k);
			if(k<aux){
				aux=k;
				casa = cont;
			}
		}
	}
	system("cls");
	printf("Menor valor: %d\n",aux);
	printf("Posicao: %d\n",casa);
	return(0);
}
