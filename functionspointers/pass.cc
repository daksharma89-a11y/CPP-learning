#include<iostream>
using namespace std;
void swap(int& x, int& y){
    int t=x;
    x=y;
    y=t;
}
int main(){
    int x=2;
    int y=6;
    int t;
    cout<<x<<endl;
    cout<<y<<endl;
    swap(x,y);
    cout<<x<<endl;
    cout<<y<<endl;
}