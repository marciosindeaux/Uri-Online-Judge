#include <iostream>
using namespace std;
int main(){
   char vet[] = {"LIFE IS NOT A PROBLEM TO BE SOLVED"};
   int k,cont;
   std::cin>>k;
   for(cont = 0;cont<k;cont++){
       cout<<vet[cont];
   }
   cout<<std::endl;
   return 0;
}
