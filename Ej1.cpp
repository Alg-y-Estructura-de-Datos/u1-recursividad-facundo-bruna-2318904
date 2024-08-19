#include <iostream>
using namespace std;
int potencia(int num,int exp){
    if(exp==0){return 1;}
    else{
        return num* potencia(num,exp-1);
    }
}
int main() {
    int num,exp;
cout<<"ingrese la base\n";
cin>>num;
cout<<"ingrese el exponente\n";
cin>>exp;
cout<<"el resultado de la potencia es: "<<potencia(num,exp);
    return 0;
}
