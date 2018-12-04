#include<stdio.h>
#include<stdlib.h>
int main(void){
	int num,p=0;
	scanf("%d",&num);
	for(p=2;p<10000;p=p+num){
		printf("%d\n",p);
	}
	return(0);
}
