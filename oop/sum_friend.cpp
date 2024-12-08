#include<iostream>
using namespace std;
class basic{
    private: 
    int a,b;
    public:
    void getdata();
    friend int sum(basic);
};
 void basic:: getdata(){
    cout<<"enter a ";
    cin>>a;
    cout<<"enter b ";
    cin>>b;
}
int sum(basic sky){
    return sky.a+sky.b;
}
int main(){
    basic s;
    s.getdata();
    cout<<sum(s);
}