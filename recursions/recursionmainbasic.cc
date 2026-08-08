#include<iostream>
using namespace std;
void print(int n){
    if(n==0) return;
        print(n-1); // this is able to print the original order.
        cout<<n<<endl;
}
void know(int n){
    if(n==0) return;
        cout<<n<<endl; // while this will print the reverse order of this. 
        know(n-1);
}
int main(){
    int n;
    cout<<"enter  a value for n : ";
    cin>>n;
    cout<<"original order :\n";
    print(n);
    cout<<"reverse order :\n";
    know(n);
}