#include <stdio.h>
 
int main() {
 
    double A,B,C,PI;
	PI = 3.14159;
	scanf("%lf %lf %lf",&A,&B,&C);
	printf("TRIANGULO: %.3lf",A*C/2);
	printf("\nCIRCULO: %.3lf",PI*C*C);
	printf("\nTRAPEZIO: %.3lf",((A+B)*C/2));
	printf("\nQUADRADO: %.3lf",B*B);
	printf("\nRETANGULO: %.3lf\n",A*B);
	return(0);
}
