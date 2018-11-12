#include<iostream>
using namespace std;
typedef struct posicao{
    int x,y;
}POSICAO;
int main (){
    POSICAO rainha,mod;
    int p1;
    cin>>rainha.x>>rainha.y>>mod.x>>mod.y;
    while((rainha.x!=0)&&(rainha.y!=0)&&(mod.x!=0)&&(mod.y!=0)){
        if((rainha.x == mod.x) && (rainha.y != mod.y)&&(p1 != 1)){
                cout<<"1"<<endl;
                p1=p1+1;
        }
        if((rainha.y == mod.y) && (rainha.x != mod.x)&&(p1 != 1)){
                cout<<"1"<<endl;
                p1=p1+1;
        }
        if((rainha.y == mod.y) && (rainha.x == mod.x)&&(p1 != 1)){
                cout<<"0"<<endl;
                p1=p1+1;
        }
        if(abs(rainha.x - mod.x) == abs(rainha.y - mod.y)&&(p1 != 1)){
            cout<<"1"<<endl;
            p1=p1+1;
        }
        if((rainha.x != mod.x)&&(rainha.y != mod.y)&&(p1 != 1)){
            cout<<"2"<<endl;
            p1=p1+1;
        }
    cin>>rainha.x>>rainha.y>>mod.x>>mod.y;
    p1 = 0;
    }
    return(0);
}
