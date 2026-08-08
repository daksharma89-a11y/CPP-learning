#include<iostream>
using namespace std;
void print(int x){
    while(x!=0){
        cout<<x<<endl;
        print(x-1);
        return;
    }
}
int main(){
    int n;
    cout<<"enter a value for n:\n";
    cin>>n;
    print(n);
}