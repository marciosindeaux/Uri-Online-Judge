#include <stdio.h>
 
int main() {
 
   	int nf,nht;
	float ht,sal;
	scanf("%d",&nf);
	scanf("%d",&nht);
	scanf("%f",&ht);
	sal = nht*ht;
	printf("NUMBER = %d\n",nf);
	printf("SALARY = U$ %.2f\n",sal);
 
    return 0;
}
