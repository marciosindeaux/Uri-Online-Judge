#include<stdio.h>
#include<stdlib.h>
int main (){
	int p,cont;
	int vet[10];
	for(cont=0;cont<10;cont++){
		scanf("%d",&p);
		if(p>0){
			vet[cont] = p;
		}else{
			vet[cont] = 1;
		}
	}
	for(cont=0;cont<10;cont++){
		printf("X[%d] = %d\n",cont,vet[cont]);
	}
	return(0);
}
