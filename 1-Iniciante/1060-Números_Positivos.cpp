#include<bits/stdc++.h>
using namespace std;
int main (){
    int cont,contp;
    float aux;
    for(cont=0;cont<6;cont++){
        cin>>aux;
        if(aux>0){
            contp++;
        }
    }
    cout<<contp<<" valores positivos"<<endl;
    return 0;
}
