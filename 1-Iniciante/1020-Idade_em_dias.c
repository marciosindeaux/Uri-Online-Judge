#include<stdio.h>
#include<stdlib.h>
int vet[] = {365,30,1};
int main(){
	int cont;
	int p;
	int rest = 0;
	int aux = 0;
	scanf("%d",&p);
	printf("%d ano(s)\n",(int)(p/vet[0]));
    p = p%vet[0];
    printf("%d mes(es)\n",(int)(p/vet[1]));
    p = p%vet[1];
    printf("%d dia(s)\n",p);
	return(0);
}
