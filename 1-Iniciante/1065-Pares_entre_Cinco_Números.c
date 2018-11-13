#include<stdio.h>
int main (){
	int contp,cont,aux;
	for(cont=0;cont<5;cont++){
		scanf("%d",&aux);
		if(abs(aux)%2==0){
			contp = contp+1;
		}
	}
	printf("%d valores pares\n",contp);
	return(0);
}
