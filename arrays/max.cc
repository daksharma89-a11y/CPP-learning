#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n : ";
    cin>> n;
    int arr[n];
    cout<<"enter elements of array :";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<" the array is \n";
    for(int i=0; i<n; i++){
        cout<<arr[i];
    }
    cout<<endl;
    int max=arr[0];
    for(int i=0; i<n; i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    cout<<"the maximum element is "<<max<<endl;
}