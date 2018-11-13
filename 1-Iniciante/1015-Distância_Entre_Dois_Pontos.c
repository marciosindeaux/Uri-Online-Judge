#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main (){
	float X1,Y1,X2,Y2,d;
	scanf("%f %f",&X1,&Y1);
	scanf("%f %f",&X2,&Y2);
	system("cls");
	d = pow( pow((X1-X2),2) + pow((Y1-Y2),2) ,0.5);
	printf("%.4f\n",d);
	return(0);
}
