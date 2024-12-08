#include<iostream>
using namespace std;
int fact(int n){
    if(n<=1){
        // cout<<1;
        return 1;
    }
    return n*fact(n-1);
}
int main(){
    int  a;
    cout<<"enter the a: ";
    cin>>a;
    cout<<"here the factorial of "<<a<< " is "<<fact(a);
}