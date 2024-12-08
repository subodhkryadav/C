#include<iostream>
using namespace std;
class student{
    private:
    int fee;
    int mark;
    public:
    string name;
    int age;
    int roll;
    char sec;
    void setdata(){
        cout<<"enter tha name of the student: ";
        cin>>name;
        cout<<"enter the age of the student: ";
        cin>>age;
        cout<<"enter the roll of the student: ";
        cin>>roll;
        cout<<"enter the sec of the student: ";
        cin>>sec;
    }
    void setdata1(){
        cout<<"enter the fee: ";
        cin>>fee;
        cout<<"enter the mark: ";
        cin>>mark;
    }
    int getdata(){
        cout<<"name of the student is: "<<name<<endl;
        cout<<"age of the student is: "<<age<<endl;
        cout<<"roll of the student is: "<<roll<<endl;
        cout<<"the sec of the student is: "<<sec<<endl;
        cout<<"the fee of the college is:"<<fee<<endl;
        cout<<"the mark of the student is: "<<mark;
    }
};
int main(){
    student sky;
    sky.setdata();
    sky.setdata1();
    sky.getdata();
    return 0;
}