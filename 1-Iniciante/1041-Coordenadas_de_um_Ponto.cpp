#include<iostream>
using namespace std;
int main (){
    float x,y;
    cin>>x;
    cin>>y;
    if(y>0){
        if(x>0){
            cout<<"Q1"<<endl;
        }
        if(x==0){
            cout<<"Eixo Y"<<endl;
        }
        if(x<0){
            cout<<"Q2"<<endl;
        }
    }
    if(y==0){
        if(x==0){
            cout<<"Origem"<<endl;
        }else{
            cout<<"Eixo X"<<endl;
        }
    }
    if(y<0){
        if(x>0){
            cout<<"Q4"<<endl;
        }
        if(x==0){
            cout<<"Eixo Y"<<endl;
        }
        if(x<0){
            cout<<"Q3"<<endl;
        }
    }
    return 0;
}
