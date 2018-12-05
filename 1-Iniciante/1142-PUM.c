#include<stdio.h>
#include<stdlib.h>
int main(){
	int num,i,j;
	int set = 1;
	scanf("%d",&num);
	for(i = 1;i<=num;i++){
		for(j=0;j<3;j++){
			printf("%d ",set);
			set++;
		}
		printf("PUM\n");
		set++;
	}
	return(0);
}
