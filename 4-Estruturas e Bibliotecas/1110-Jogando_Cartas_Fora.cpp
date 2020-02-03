#include<stdio.h>
#include<stdlib.h>

typedef struct CARTA{

    int numero;
    struct CARTA * prox; 

}CARTA;

typedef struct GERENCIADOR_CARTAS{

    struct CARTA * inicio;
    struct CARTA * fim;
    int quantidade;

}GERENCIADOR_CARTAS;

void mostrar(GERENCIADOR_CARTAS * gerenciador);
void calculaRestultado(GERENCIADOR_CARTAS * gerenciador);
CARTA * alocaCarta();
GERENCIADOR_CARTAS * alocaGerenciador();
void alocaListaCartas(GERENCIADOR_CARTAS * gereniciador,int quantidadeCartas);
void insere(CARTA * aux, GERENCIADOR_CARTAS * fila_descartes);

int main(){
    int quantidadeCartas;
    GERENCIADOR_CARTAS * gerenciador = alocaGerenciador();
    scanf("%d",&quantidadeCartas);
    while(quantidadeCartas != 0){
        
        alocaListaCartas(gerenciador,quantidadeCartas);
        calculaRestultado(gerenciador);
        
        scanf("%d",&quantidadeCartas);
        free(gerenciador->inicio);
        gerenciador->inicio = NULL;
        gerenciador->fim = NULL;
    }

    return 0;
}

GERENCIADOR_CARTAS * alocaGerenciador(){
    GERENCIADOR_CARTAS * gerenciador = (GERENCIADOR_CARTAS *)malloc(sizeof(GERENCIADOR_CARTAS));
    
    gerenciador->inicio = NULL;
    gerenciador->fim = NULL;
    gerenciador->quantidade = 0;

    return gerenciador;
}
CARTA * alocaCarta(){
    CARTA *carta = (CARTA*)malloc(sizeof(CARTA));
    carta->prox = NULL;

    return carta;
}

void alocaListaCartas(GERENCIADOR_CARTAS * gerenciador,int quantidadeCartas){
    CARTA * aux;
    for(int i = 1 ; i <= quantidadeCartas; i++){
        
        aux = alocaCarta();
        aux->numero = i;
        
        if(gerenciador->inicio == NULL){   
            
            gerenciador->inicio = aux;
            gerenciador->fim = aux;

        }else{

            gerenciador->fim->prox = aux;
            gerenciador->fim = aux;
            
        }
    }
}


void calculaRestultado(GERENCIADOR_CARTAS * gerenciador){
    GERENCIADOR_CARTAS * fila_descartes = alocaGerenciador();
    int contador = 1;
    CARTA * aux;
    while(gerenciador->inicio != gerenciador->fim){
        aux = gerenciador->inicio;
        gerenciador->inicio = aux->prox;
        if(contador % 2 != 0){
            insere(aux, fila_descartes);
        }else{
            aux->prox = NULL;
            gerenciador->fim->prox = aux;
            gerenciador->fim = aux;
        }
        contador++;
    }

    // Mostragem do resultado 
    printf("Discarded cards: ");
    mostrar(fila_descartes);
    printf("\nRemaining card: %d\n",gerenciador->inicio->numero);
}

void insere(CARTA * novaCarta, GERENCIADOR_CARTAS * fila_descartes){
    novaCarta->prox = NULL;
    
    if(fila_descartes->inicio == NULL){

        fila_descartes->inicio =  novaCarta;
        fila_descartes->fim = novaCarta;
    
    }else{

        fila_descartes->fim->prox = novaCarta;
        fila_descartes->fim = novaCarta;

    }
}

void mostrar(GERENCIADOR_CARTAS * gerenciador){
    CARTA * aux = gerenciador->inicio;
    while(aux != NULL){
        printf("%d",aux->numero);
        if(aux->prox != NULL){
            printf(", ");
        }
        aux = aux->prox;
    }
}
