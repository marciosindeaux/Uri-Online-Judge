#include<stdio.h>
#include<stdlib.h>
int vet[7] = {100,50,20,10,5,2,1};
int main(){
	int cont;
	int p;
	int rest = 0;
	int aux = 0;
	scanf("%d",&p);
	printf("%d\n",p);
	for(cont=0;cont<7;cont++){
		rest = p%vet[cont];
		aux = p - rest;
		aux = aux/vet[cont];
		p = rest;
		printf("%d nota(s) de R$ %d,00\n",aux,vet[cont]);
	}	
	return(0);
}
