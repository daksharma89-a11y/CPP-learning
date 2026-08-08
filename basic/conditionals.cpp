#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter a value for a\n";
    cin>>a;
    cout<<"enter a value for b\n";
    cin>>b;
    cout<<"enter a value for c\n";
    cin>>c;
    if(a>b && a>c){
        cout<<"a is greatest";
    }
    else if(b>a && b>c){
        cout<<"b is greatest";
    }
    else{
        cout<<"c is greatest";
    }
}