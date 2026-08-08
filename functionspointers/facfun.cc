#include<iostream>
using namespace std;
int fac(int x){
    int f=1;
    for(int i=1; i<=x; i++){
        f=f*i;
    }
    return f;
}
int main(){
    int n,r;
    cout<<"enter n and r :\n";
    cin>>n;
    cin>>r;
    int a= fac(n);
    int b= fac(r);
    int c= fac(n-r);
    cout<<a/(b*c)<<endl;
}