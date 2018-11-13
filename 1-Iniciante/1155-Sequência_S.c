#include <stdio.h>
 
int main() {
 
    int cont;
    float s=0,t;
    for(cont=1;cont<=100;cont++){
        t=cont;
        s = (1/t)+s;
    }
    printf("%.2f\n",s);
 
    return 0;
}
