#include <iostream>
using namespace std;
bool digito(int n,int d){
    if(n==d){return true;}
    else
    if(n==0){return false;}
    else {
        if (n % 10 == d) { return true; } else {return digito(n/10,d);}
    }
}
int main(){
int n,d;
cout<<"ingrese el numero\n";
cin>>n;
cout<<"ingrese el digito\n";
cin>>d;
cout<<digito(n,d);
}
