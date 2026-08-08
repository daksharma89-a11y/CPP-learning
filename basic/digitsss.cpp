#include<iostream>
using namespace std;
int main(){
    int count=0;
    int n;
    cout<<"enter a digit\n";
    cin>>n;
    int digit=0;
    int sum=0;
    int product=1;
    while(n>0){
        digit=n%10;
        n=n/10;
        sum=sum+digit;
        product=product*digit;
        count++;
    }
    cout<<"the number of digits is :"<<count<<endl;
    cout<<"the sum of the digits is :"<<sum<<endl;
    cout<<"the product of the digits is :"<<product<<endl;
}