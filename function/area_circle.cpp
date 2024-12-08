#include<iostream>
using namespace std;
int area( int r,float pi){
    float ar=pi*r*r;
    return ar;
}
int main(){
 int rad=2;
 float pi=3.1;
 cout<<"area: "<<area(rad,pi);
}