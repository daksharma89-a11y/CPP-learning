#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n : ";
    cin>> n;
    int arr[n];
    cout<<" the array is \n";
    for(int i=0; i<n; i++){
        arr[i]=i*i;
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}