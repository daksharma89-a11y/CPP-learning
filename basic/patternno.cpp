#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"enter a digit\n";
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout<<j;
            cout<<i;
        }
        cout<<endl;
    }
} 