#include<iostream>
using namespace std;
//area of the circle
float  area(int r,float pi){ 
    return pi*r*r;
}
//area of the ractangle 
float area(int l,int w){
    return l*w;
}
//area of the square 
float area( int a){
    return 4*a;
}
int main(){
    cout<<"for circle\n"; 
    int radius;
    cout<<"enter the radius of the circle: ";
    cin>>radius;
    float pi=3.14;
    
    cout<<"for ractangle\n";
    int length,width;
    cout<<"enter the length: ";
    cin>>length;
    cout<<"enter the width: ";
    cin>>width;

    cout<<"for square\n ";
    int side ;
    cout<<"enter the side: ";
    cin>>side;

    cout<<"area of the circle is: "<<area(radius,pi)<<endl;
    cout<<"area of the ractangle is: "<<area(length,width)<<endl;
    cout<<"the area of the square is: "<<area(side)<<endl;
    return 0;
}