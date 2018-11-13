#include<iostream>
#define MAX 100
using namespace std;
int main(){
    int cont,aux,max,num;
    for(cont=1;cont<=MAX;cont++){
        cin>>num;
        if(cont == 1){
            max = num;
            aux = cont;
        }
        if(num>=max){
            max = num;
            aux = cont;
        }
    }
    cout<<max<<endl;
    cout<<aux<<endl;
    return 0;
}
