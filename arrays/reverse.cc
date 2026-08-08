#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    int brr[5];
    for(int i=0; i<5; i++){
        int j=5-1-i;
        brr[i]=arr[j];
    }
    cout<<"brr is \n";
    for(int i=0; i<5; i++){
        cout<<brr[i]<<" ";
    }
    cout<<endl;
}