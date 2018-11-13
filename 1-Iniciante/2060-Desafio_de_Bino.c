#include<stdio.h>
#include<stdlib.h>
int main (){
	int n;
	scanf("%d",&n);
	int cont,div2=0,div3=0,div4=0,div5=0;
	int k;
	for(cont=0;cont<n;cont++){
		scanf("%d",&k);
		if(k%2==0){
			div2 = div2 +1;
		}if(k%3==0){
			div3 = div3 +1;
		}if(k%4==0){
			div4 = div4 +1;
		}if(k%5==0){
			div5 = div5 +1;
		}
	}
	system("cls");
	printf("%d Multiplo(s) de 2\n",div2);
	printf("%d Multiplo(s) de 3\n",div3);
	printf("%d Multiplo(s) de 4\n",div4);
	printf("%d Multiplo(s) de 5\n",div5);
	return(0);
}
