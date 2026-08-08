#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a value for n : ";
    cin>>n;
    int arr[n];
    int sum=0;
    cout<<"enter array elements :";
    for(int i=0; i<n; i++){
            cin>>arr[i];
    }
    cout<<"array is\n";
    for(int i=0; i<n; i++){
            cout<<arr[i]<<" ";
            sum=sum+arr[i];
    }
    cout<<endl;
    cout<<"sum is"<<sum<<endl;
}