#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    cout<<"the reverse of arr is \n";
    int n=sizeof(arr)/4;
    int i=0;
    int j=n-1;
    int original[5];
    for(int i=0; i<5; i++){
        original[i]=arr[i];
    }
    while(i<=j){
        int t=arr[i];
        arr[i]=arr[j];
        arr[j]=t;
        i++;
        j--;
    }
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    bool pal=true;
    for(int k=0; k<5; k++){
        if(arr[k]!=original[k]){
            pal=false;
            break;
        }
    }
    if(pal==true){
        cout<<"it is a palindrome";
    }else{
        cout<<"it is not a palindrome";
    }
    cout<<endl;
}