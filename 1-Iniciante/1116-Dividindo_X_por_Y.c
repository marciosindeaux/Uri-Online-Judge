#include<stdio.h>
#include<stdlib.h>
int main (void){
	int qtd,cont;
	int x,y;
	float xf,yf;
	scanf("%d",&qtd);
	if(qtd!=0){
		for(cont=0;cont<qtd;cont++){
			scanf("%d %d",&x,&y);
			if(y==0){
				printf("divisao impossivel\n");
			}else{
				xf = (float)x;
				yf = (float)y;
				printf("%.1f\n",(float)(xf/yf));
			}
		}
	}
	return(0);
}
