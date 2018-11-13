#include<stdio.h>
int main (){
    int k,cont,var;
    scanf("%d",&k);
    for(cont=0;cont<k;cont++){
        scanf("%d",&var);
        if(var%2==0){
            printf("0\n");
        }else{
            printf("1\n");
        }
    }
    return(0);
}
