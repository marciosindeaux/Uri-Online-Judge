#include<stdio.h>
#include<stdlib.h>
int main (){
    int p,cont=0;
    scanf("%d",&p);
    if(p%2 == 0){
        p = p + 1;
    }else{
        p = p+2;
    }
    for(cont;cont<6;cont++){
        printf("%d\n",p);
        p = p+2;
    }
    return(0);
}
