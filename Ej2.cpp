#include <iostream>
using namespace std;
int sumanaturales(int n){
    if(n==0){return 0;}
    if(n==1){cout<<n;
        return 1;} else{
        cout<<n<<"+";
        return n+ sumanaturales(n-1);
    }
}
int main() {
 int n;
 cout<<"ingrese la cantidad de naturales\n";
 cin>>n;
 int suma= sumanaturales(n);
 cout<<"="<<suma;
    return 0;
}
