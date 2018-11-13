#include<stdio.h>
#include<stdlib.h>
int main (void){
	int x,y;
	int aux=0;
	do{
		scanf("%d %d",&x,&y);
		if((x == 0)||(y == 0)){
			return(0);
		}else{
			if(x>0){
				if(y>0){
					printf("primeiro\n");
				}else{
					printf("quarto\n");
				}
			}else{
				if(y>0){
					printf("segundo\n");
				}else{
					printf("terceiro\n");
				}
			}
		}
		
	}while(aux == 0);
	return(0);
}
