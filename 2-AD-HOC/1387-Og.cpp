#include<bits/stdc++.h>
using namespace std;
int main (){
    int l,p;
    cin>>l>>p;
    if(l!=0 && p!=0){
        do{
            cout<<l+p<<endl;
            cin>>l;
            cin>>p;
            if(l==0&&p==0){
                return 0;
            }
        } while(p+l != 1000);
    }
    return 0;
}
