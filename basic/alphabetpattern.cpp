#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a digit\n";
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout<<(char)(i+64);// use either one of them by commenting.
            cout<<(char)(j+64);
        }
        cout<<endl;
    }
}