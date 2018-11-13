#include<stdio.h>
int notas(int p);
int moedas(int s);

int main (){
	double k;
	int p,m;
	scanf("%lf",&k);
	k = k*100;
	p = (int)(k);
	m = notas(p);
	m = (int)(m);
	moedas(m);
	return (0);
}

int notas(int p){
	int rd,k;
	rd = p;
	printf("NOTAS:\n");
	k = (int)(rd/10000);
		printf("%d nota(s) de R$ 100.00\n",k);
	rd = p%10000;
	k = (int)(rd/5000);
		printf("%d nota(s) de R$ 50.00\n",k);
	rd = rd%5000;
	k = (int)(rd/2000);
		printf("%d nota(s) de R$ 20.00\n",k);
	rd = rd%2000;
	k = (int)(rd/1000);
		printf("%d nota(s) de R$ 10.00\n",k);
	rd = rd%1000;
	k = (int)(rd/500);
		printf("%d nota(s) de R$ 5.00\n",k);
	rd = rd%500;
	k = (int)(rd/200);
		printf("%d nota(s) de R$ 2.00\n",k);
	rd = rd%200;
	rd = (int)(rd);
	return(rd);
}
int moedas(int p){
	int rd,k;
	rd = (int)p;
	printf("MOEDAS:\n");
	k = (int)(rd/100);
		printf("%d moeda(s) de R$ 1.00\n",k);
	rd = p%100;
	k = (int)(rd/50);
		printf("%d moeda(s) de R$ 0.50\n",k);
	rd = rd%50;
	k = (int)(rd/25);
		printf("%d moeda(s) de R$ 0.25\n",k);
	rd = rd%25;
	k = (int)(rd/10);
	printf("%d moeda(s) de R$ 0.10\n",k);
	rd = rd%10;
	k = (int)(rd/5);
		printf("%d moeda(s) de R$ 0.05\n",k);
	rd = rd%5;
	k = (int)(rd);
	printf("%d moeda(s) de R$ 0.01\n",k);
	return(k);
}
