#include<iostream>
#include<string>
using namespace std;     //using typedef then we are not use the struct keybd that is used to --> typedef struct student
     struct student{
        string name;
        int age;
        int roll;
        char sec;
        string branch;
    
    };                      //here we use the   }ep;   if we are use the typedef then
    int main(){
        struct student sky;   //not use sturct key use only ep sky;
        sky.name="subodh";
        sky.age=18;
        sky.roll=44;
        sky.sec='E';
        sky.branch="b.tech(cse)";
        cout<<"here the student name: "<<sky.name<<endl;
        cout<<"here the student age: "<<sky.age<<endl;
        cout<<"here the student roll: "<<sky.roll<<endl;
        cout<<"here the student sec: "<<sky.sec<<endl;
        cout<<"here the student branch: "<<sky.branch<<endl;
    }
