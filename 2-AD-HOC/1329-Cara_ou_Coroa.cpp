#include<iostream>
using namespace std;
int main (){
    int p,x=0,aux,y=0,cont;
    cin>>p;
    while(p != 0){
        for(cont =0;cont<p;cont++){
            cin>>aux;
            if(aux == 0){
                x = x+1;
            }else{
                y =y +1;
            }
        }
        cout<<"Mary won "<<x<<" times and John won "<<y<<" times"<<endl;
        cin>>p;
        x = 0;
        y = 0;
    }
    return 0;
}
