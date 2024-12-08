#include<iostream>
#include<string>
using namespace std;
class student{
    private: 
    int age;
    public: 
    string name;
    int roll;
    char sec;
    string breanch;
    void setstudentdata(){
        cout<<"enter the student name: ";
        cin>>name;
        cout<<"enter the student roll: ";
        cin>>roll;
        cout<<"enter the student sec: ";
        cin>>sec;
        cout<<"enter the student age: ";
        cin>>age;
    }
    int getStudentdata(){
        cout<<"name of the student: "<<name<<endl;
        cout<<"roll of the student: "<<roll<<endl;
        cout<<"sec of the student: "<<sec<<endl;
        cout<<"age of the student: "<<age<<endl;
    }
};
class teacher{
    private:
    int salary;
    public:
    string name;
    string subject;
    int mobile;
    void setTeacherdata(){
        cout<<"enter the name of the teacher: ";
        cin>>name;
        cout<<"enter the subject of the teacher: ";
        cin>>subject;
        cout<<"enter the mobile no of the teacher: ";
        cin>>mobile;
        cout<<"enter the salary of the teacher: ";
        cin>>salary;
    }
    int getTeacherdata(){
        cout<<"name of the teacher is : "<<name<<endl;
        cout<<"subject of the teache is: "<<subject<<endl;
        cout<<"mobile no of the teacher is: "<<mobile<<endl;
        cout<<"teacher salary: "<<salary<<endl;
    }
};
int main(){
    {
    student first;
    first.setstudentdata();
    first.getStudentdata();
    }
    {
    teacher first;
    first.setTeacherdata();
    first.getTeacherdata();
    }
    return 0;
}