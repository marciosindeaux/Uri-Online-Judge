#include<iostream>
using namespace std;
int main (){
    long int c;
    int cont1;
    cin>>c;
    for(cont1=2;cont1<=c;cont1 = cont1 +2){
        cout<<cont1<<"^2 = "<<cont1*cont1<<endl;
    }
    return 0;
}
