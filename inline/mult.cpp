#include<iostream>
using namespace std;
 inline int mult(int a,int b){
    return a*b;
}
int main(){
    int a,b;
    cout<<"enter a: ";
    cin>>a;
    cout<<"enter b: ";
    cin>>b;
    //when the function call more then one time then it is called the inline function
    cout<<"multiplication of "<<a<<" and "<<b<< " is: "<<mult(a,b)<<endl;
    cout<<"multiplication of "<<a<<" and "<<b<< " is: "<<mult(a,b)<<endl;
    cout<<"multiplication of "<<a<<" and "<<b<< " is: "<<mult(a,b)<<endl;
    cout<<"multiplication of "<<a<<" and "<<b<< " is: "<<mult(a,b)<<endl;
    return 0;
}