#include<iostream>
using namespace std;
int main (){
    int p,x=0,aux1,aux2,y=0,cont;
    cin>>p;
    while(p != 0){
        for(cont =0;cont<p;cont++){
            cin>>aux1>>aux2;
            if(aux1 != aux2){
                if(aux1>aux2){
                    x = x+1;
                }else{
                    y = y+1;
                }
            }
        }
        cout<<x<<" "<<y<<endl;
        x=0;
        y=0;
        cin>>p;
    }
    return 0;
}
