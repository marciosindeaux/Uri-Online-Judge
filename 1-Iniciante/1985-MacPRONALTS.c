#include<stdio.h>
int main (){
	int p,cont,q,cont1=0,cont2=0,cont3=0,cont4=0,cont5=0;
	float max;
	int aux;
	scanf("%d",&p);
	for(cont = 0;cont<p;cont++){
		scanf("%d %d",&aux,&q);
		if(cont1 != 1){
			if(aux==1001){
				max = max + q*1.5;
				cont1++;
			}
		}
		if(cont2 != 1){
			if(aux == 1002){
				max = max + q*2.5;
				cont2++;
			}
		
		}if(cont3 != 1){
			if(aux == 1003){
				max = max + q*3.5;
				cont3++;
			}
		}
		if(cont4 != 1){
			if(aux == 1004){
				max = max + q*4.5;
				cont4++;
			}
		}
		if(cont5 != 1){
			if(aux == 1005){
				max = max + q*5.5;
				cont5++;
			}
		}
		//printf("\n\n%d\t%d\t%f\n\n",aux,q,max);
	}
	printf("%.2f\n",max);
	return(0);
}
