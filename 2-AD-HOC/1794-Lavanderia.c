#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int main(){
	int n,la,lb,sa,sb;
	bool b = false;
	scanf("%d",&n);
	scanf("%d %d",&la,&lb);
	if((n>=la)&&(n<=lb)){
		scanf("%d %d",&sa,&sb);
		if((n >= sa)&&(n <= sb)){
			b = true;
		}
	}else{
		scanf("%d %d",&sa,&sb);
	}
	if(b == true){
		printf("possivel\n");
	}else{
		printf("impossivel\n");
	}
	return(0);
}
