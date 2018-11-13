#include<stdio.h>
int main (){
	int n,aux1,aux2,aux3,auxal;
	scanf("%d",&n);
	if(n<3600){
		if(n<60){
			printf("0:0:%d\n",n);
		}else{
			aux2 = (n/60);
			aux3 = n-aux2*60 ;
			printf("0:%d:%d\n",aux2,aux3);
		}
	}else{
		aux1 = (n/3600);
		auxal = n - 3600*aux1;
		if((n-aux1*60 )<60){
			aux3 = n - aux1*60;
			printf("%d:0:%d\n",aux1,aux3);
		}else{
			aux2 = ((auxal)/60);
			aux3 = auxal - aux2*60;
			printf("%d:%d:%d\n",aux1,aux2,aux3);
		}
	}
	return(0);
}
