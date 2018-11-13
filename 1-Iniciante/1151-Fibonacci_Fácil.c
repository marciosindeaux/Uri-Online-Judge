#include<stdio.h>
#include<stdlib.h>
int main (){
	int cont,val,v1,v2,serie;
	v1=0;
	v2=1;
	scanf("%d",&val);
	system("cls");
	printf("0");
	for(cont=0;cont<val-1;cont++){
		serie = v1+v2;
		if(cont != val){
			printf(" ");
		}
			printf("%d",serie);
		v2=v1;
		v1=serie;
	}
	printf("\n");
	return(0);
	
}
