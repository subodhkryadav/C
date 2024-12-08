#include<iostream>
using namespace std;
class Friend{
    private: 
    int a,b;
    
    public:
    void setnum(){
        cout<<"enter the a: ";
        cin>>a;
        cout<<"enter the b: ";
        cin>>b;
    }
    int getnum(){
        cout<<"sum "<<a+b<<endl;;
    }
    friend int mult(Friend);
};
int mult(Friend sky){
    return sky.a*sky.b;
}
int main(){
    Friend subodh;
    subodh.setnum();
    subodh.getnum();
    cout<<"multiply= "<<mult(subodh);
}