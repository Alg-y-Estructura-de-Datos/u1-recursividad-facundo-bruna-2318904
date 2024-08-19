#include <iostream>
using namespace std;
int mayorr(int a[],int n,int mayor){
    if(n==1){
        return a[0];
    } else{
        if(a[n-1]>mayor){mayor=a[n-1];}
        if((n-1)==0){return mayor;}
        return mayorr(a,n-1,mayor);

    }
}
int main(){
int n,mayor=0;
cout<<"ingrese el tamaño del arreglo\n";
cin>>n;
int a[n];
cout<<"ingrese los elementos del arreglo\n";
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
    }
    mayor=mayorr(a,n,mayor);
    cout<<"el mayor es: "<<mayor;
}

