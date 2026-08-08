#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n : ";
    cin>> n;
    int arr[n];
    cout<<"enter array elements : ";
    for(int i=0; i<=n; i++){
        cin>>arr[i];
    }
    cout<<" the array is \n";
    for(int i=0; i<=n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"the new array is :\n";
    for(int i=0; i<=n; i++){
        if(i%2==0){
            arr[i]=arr[i]+10;
        }else{
            arr[i]=arr[i]*2;
        }
    }
    for(int i=0; i<=n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}