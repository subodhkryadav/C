#include<iostream>
using namespace std;
int main(){
    int a=9;
    int* b=&a;
    int** c=&b;
    cout<<"the address of a: "<<b<<endl;
    cout<<"the address of a: "<<&a<<endl;
    cout<<"the address of b: "<<c<<endl;
    cout<<"the address of b: "<<&b<<endl;
    cout<<*c;
    return 0;

}