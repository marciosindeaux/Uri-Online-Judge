#include<bits/stdc++.h>
using namespace std;
int main (){
    int k;
    int x,y;
    cin>>k;
    int n,m;
    do{
        cin>>m;
        cin>>n;
        while(k!=0){
            cin>>x;
            cin>>y;
            if(y>n){
                if(x>m){
                    cout<<"NE"<<endl;
                    }
                if(x==m){
                    cout<<"divisa"<<endl;
                }
                if(x<m){
                    cout<<"NO"<<endl;
                }
            }
            if(y==n){
                if(x==m){
                    cout<<"divisa"<<endl;
                }else{
                    cout<<"divisa"<<endl;
                }
            }
            if(y<n){
                if(x>m){
                    cout<<"SE"<<endl;
                }
                if(x==m){
                    cout<<"divisa"<<endl;
                }
                if(x<m){
                    cout<<"SO"<<endl;
                }
            }
            k -= 1;
        }
        cin>>k;
    }while(k!=0);
    return 0;
}
