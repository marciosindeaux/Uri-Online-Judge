#include <stdio.h>
#include<stdlib.h>
int main() {
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if(a>b){
		if(b>c){
			printf("%d eh o maior\n",a);
		}else if(a>c){	
			printf("%d eh o maior\n",a);
		}else{
			printf("%d eh o maior\n",c);
		}
	}else if(b>c){
		printf("%d eh o maior\n",b);
	}else if(c>b){
		printf("%d eh o maior\n",c);
	}else{
		printf("%d eh o maior\n",b);
	}
	return(0);
 }
