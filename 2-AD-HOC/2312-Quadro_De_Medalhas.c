#include<stdio.h>
#include<stdlib.h>
typedef struct olimp{
	char pais[50];
	int ou,pr,br;
}olimp;
int main() {
	int p,cont=0,cont2;
	scanf("%d",&p);
	olimp paises[p],aux;
	for(cont;cont<p;cont++){
		scanf("%s %d %d %d",&paises[cont].pais,&paises[cont].ou,&paises[cont].pr,&paises[cont].br);
	}
	for(cont=0;cont<p;cont++){
		for(cont2=cont+1;cont2<p;cont2++){
			if(paises[cont2].ou>paises[cont].ou){
				aux = paises[cont2];
				paises[cont2] = paises[cont];
				paises[cont] = aux;
			}
		}
	}
	for(cont=0;cont<p;cont++){
		for(cont2=cont+1;cont2<p;cont2++){
			if(paises[cont2].ou == paises[cont].ou){
				if(paises[cont2].pr > paises[cont].pr){
					aux = paises[cont2];
					paises[cont2] = paises[cont];
					paises[cont] = aux;
				}
			}
		}
	}
	for(cont=0;cont<p;cont++){
		for(cont2=cont+1;cont2<p;cont2++){
			if(paises[cont2].ou == paises[cont].ou){
				if(paises[cont2].pr == paises[cont].pr){
					if(paises[cont2].br > paises[cont].br){
						aux = paises[cont2];
						paises[cont2] = paises[cont];
						paises[cont] = aux;
					}
				}
			}
		}
	}
	for(cont=0;cont<p;cont++){
		for(cont2=cont+1;cont2<p;cont2++){
			if(paises[cont2].ou == paises[cont].ou){
				if(paises[cont2].pr == paises[cont].pr){
					if(paises[cont2].br == paises[cont].br){
						if(paises[cont2].pais[0] < paises[cont].pais[0]){
							aux = paises[cont2];
							paises[cont2] = paises[cont];
							paises[cont] = aux;
						}
					}
				}
			}
		}
	}
	system("cls");
	for(cont=0;cont<p;cont++){
			printf("%s %d %d %d\n",paises[cont].pais,paises[cont].ou,paises[cont].pr,paises[cont].br);
	}
	return (0);
	
}
