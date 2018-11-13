#include<stdio.h>
#include<stdlib.h>
int main (void){
	int esc,qtd;
	scanf("%d %d",&esc,&qtd);
	if(esc == 1){
		printf("Total: R$ %.2f\n",qtd*4.00);
	}else{
		if(esc==2){
			printf("Total: R$ %.2f\n",qtd*4.50);
		}else{
			if(esc == 3){
				printf("Total: R$ %.2f\n",qtd*5.00);
			}else{
				if(esc == 4){
					printf("Total: R$ %.2f\n",qtd*2.00);
				}else{
					if(esc==5){
						printf("Total: R$ %.2f\n",qtd*1.50);
					}
				}
			}
		}
	}
	return(0);
}
