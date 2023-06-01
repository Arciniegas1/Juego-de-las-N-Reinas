#include <iostream>
#include <math.h>
using namespace std;
int x=0;


bool comprobar(int reinas[], int n, int k){
  int i;
  for(i=0; i<k; i++){
    if( (reinas[i]==reinas[k]) or ( abs(k-1)==abs(reinas[k]-reinas[i]) ) ){
      return false;
    }
  }
  return true;
}

void Nreinas(int reinas[],int n, int k){
  if(k==n){
    x++;
    cout<<"Solucion "<<x<<" : ";
    for(int i=0; i<n; i++){
      cout<<reinas[i]<<" , ";
    }
    cout<<endl;
  }
  else{
    for(reinas[k]=0;reinas[k]<n;reinas[k]++){
      if(comprobar(reinas,n,k)){
        Nreinas(reinas,n,k+1);
      }
    }
  }

}

int main() {
  int k=0;
  int cant;
  cout<<"Ingrese el numero de reinas : ";
  cin>>cant;

  int *reinas = new int[cant];
  
  for(int i=0; i<cant; i++){
    reinas[i]=-1;
      
  }
  Nreinas(reinas,cant,k);
  return 0;
}