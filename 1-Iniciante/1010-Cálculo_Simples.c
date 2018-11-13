#include <stdio.h>
 
int main() {
 
    int codp1,nump1,codp2,nump2;
	float val1,val2,tot,sub1,sub2;
	scanf("%d %d %f",&codp1,&nump1,&val1);
	scanf("%d %d %f",&codp2,&nump2,&val2);
	sub1 = (nump1*val1);
	sub2 = (nump2*val2);
	tot = sub1 + sub2;
	printf("VALOR A PAGAR: R$ %.2f\n",tot);
 
    return 0;
}
