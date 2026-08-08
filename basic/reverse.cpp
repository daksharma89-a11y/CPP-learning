#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a digit\n";
    cin>>n;
    int digit=0;
    int r=0;
    int m=n;
    while(n>0){
        digit=n%10;
        n=n/10;
        r=(r*10)+digit;
    }
    int sol=0;
    sol=sol+r+m;
    cout<<"the reverse is :"<<r<<endl;
    cout<<"the sum of original and reverse is :"<<sol<<endl;
}