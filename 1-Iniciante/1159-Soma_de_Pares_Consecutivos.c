#include<stdio.h>
#include<stdlib.h>
int main (){
	int p,cont,soma;
	scanf("%d",&p);
	while(p!=0){
		if( abs(p) % 2 !=0){
			p = p+1;
		}
		soma = 5*(p + (p + 8))/2;
		printf("%d\n",soma);
		scanf("%d",&p);
	}
}
