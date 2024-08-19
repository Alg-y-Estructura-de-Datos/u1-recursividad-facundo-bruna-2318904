#include <iostream>
using namespace std;
void invertir(int n){
    if(n<10&&n>=0){
        cout<<n;
    } else  if(n<0){cout<<"ingrese un numero positivo\n";} else{
    cout<<n%10;
        invertir(n/10);
    }
}
int main() {
    int n;
    cout<<"ingrese el numero a invertir\n";
    cin>>n;
    invertir(n);
    return 0;
}
