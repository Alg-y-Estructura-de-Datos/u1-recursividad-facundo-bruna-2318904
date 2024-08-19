#include <iostream>
using namespace std;
int parenposimpar(int n,int ccifras,int pos=1){
    if(n==0){return 0;} else{
        int digitoactual=n%10;
        if(ccifras%2==0){
            if(pos%2==0&&digitoactual%2==0){return 1+ parenposimpar(n/10,ccifras-1);}
            else{return parenposimpar(n/10,ccifras-1);}
        } else{
            if(pos%2!=0&&digitoactual%2==0){
                return 1+ parenposimpar(n/10,ccifras-1);
            } else{return parenposimpar(n/10,ccifras-1);}
        }

    }
}
int main(){
int n,cifras;
cout<<"ingrese el numero\n";
cin>>n;
cout<<"ingrese la cantidad de cifras\n";
cin>>cifras;
cout<<"la cantidad de numeros pares en posiciones impares es: "<<parenposimpar(n,cifras);
}