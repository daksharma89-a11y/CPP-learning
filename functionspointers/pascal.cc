#include<iostream>
using namespace std;
int fac(int x){
    int f=1;
    for(int i=1; i<=x; i++){
        f=f*i;
    }
    return f;
}
int ncr(int n, int r){
    return fac(n)/(fac(r)*fac(n-r));
}
int main(){
    int n;
    cout<<"enter n\n";
    cin>>n;
    for(int i=0; i<=n; i++){
        for(int j=0; j<=n-i; j++){
            cout<<" ";
        }
        for(int j=0; j<=i; j++){
            cout<<ncr(i,j)<<" ";
        }
        cout<<endl;
    }
}