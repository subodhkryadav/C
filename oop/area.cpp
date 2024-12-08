#include<iostream>
using namespace std;
class calculate{
    public:
    int radius;
    float pi;
    void setdata(){
        cout<<"enter the radius of the circle: ";
        cin>>radius;
        pi=3.14;
    }
    int  getdata(){
        float  area=pi*radius*radius;
        cout<<"the area of the circle is: ";
        cout<<area;
    }
};
int main(){
    calculate Area;
    
    Area.setdata();
    Area.getdata();
}