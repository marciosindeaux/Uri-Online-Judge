#include<iostream>
using namespace std;
int main (){
	int d,cont,aux;
	cin>>d;
	for(cont=0;cont<d;cont++){
		cin>>aux;
		if(aux != 0){
			if(aux%2 == 0){
				cout<<"EVEN ";
				if(aux>0){
					cout<<"POSITIVE"<<endl;
				}else{
					cout<<"NEGATIVE"<<endl;
				}
			}else{
				cout<<"ODD ";
				if(aux>0){
					cout<<"POSITIVE"<<endl;
				}else{
					cout<<"NEGATIVE"<<endl;
				}
			}
		}else{
			cout<<"NULL"<<endl;
		}
	}
  return(0);
}
