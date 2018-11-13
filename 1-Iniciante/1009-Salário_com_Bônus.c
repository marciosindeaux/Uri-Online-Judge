
#include <stdio.h>
#include<stdlib.h>
int main() {
 	char nome[30];
	double fixo,vendas,comiss;
	gets(nome);
	fflush(stdin);
	scanf("%lf",&fixo);
	scanf("%lf",&vendas);
	fixo = fixo + (15*vendas/100) ;
	printf("TOTAL = R$ %.2lf\n",fixo);
    return 0;
}
