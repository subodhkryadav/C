#include<iostream>
using namespace std;
int fibbo(int n){
    if(n<=1){
        return 1;
    }
    return fibbo(n-1)+fibbo(n-2);
}
int main(){
    int a;
    cout<<"enter a: ";
    cin>>a;
    cout<<"the fibbonachi of "<<a<<" is "<<fibbo(a);
}