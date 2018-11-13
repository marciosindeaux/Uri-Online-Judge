#include<iostream>
using namespace std;
int main (){
    int cont=1,p=7;;
    for(cont;cont<=9;cont=cont+2){
        cout<<"I="<<cont<<" J="<<p<<endl;
        cout<<"I="<<cont<<" J="<<p-1<<endl;
        cout<<"I="<<cont<<" J="<<p-2<<endl;
        p = p+2;
    }
    return 0 ;
}
