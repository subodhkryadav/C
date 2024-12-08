#include<iostream>
using namespace std;
int sum(int a,int b);
int main(){
    int p,q;
    cout<<"enter the a: ";
    cin>>p;
    cout<<"enter the b: ";
    cin>>q;
    cout<<"sum is: "<<sum(p,q);
}
int sum(int a,int b){
    int c=a+b;
    return c;

}