#include<iostream>
using namespace std;
class employ{
    int id;
    static int count;
    public:
        void setdata(){
            cout<<"enter the id "<<endl;
            cin >>id;
            count++;
        }
        void getdata (){
            cout<<"the id of the employ is "<<id<<" and this is employ number "<<count<<endl;
        }
};
int employ:: count;
int main(){
    employ subodh,madhav;
    subodh.setdata();
    subodh.getdata();

    madhav.setdata();
    madhav.getdata();
}