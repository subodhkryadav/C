
/* function over loading is defined as the when the function is same and its datatype and parameter may be different 
in below example the function are same and its data type are same but number of parameter are different 
ex the function name is sum are equal but data type are 2 and 3 that is called function overloading */


#include<iostream>
using namespace std;
int sum(int a,int b){
    return a+b;
}
int sum(int a,int b,int c){
    return a+b+c;
}
int main(){
    int a,b,c,d,e;
    /*cout<<"the sum of 3 and 5 is "<<sum(3,5)<<endl;
    cout<<"the sum of 2,5 and 8 is "<<sum(2,5,8);
    */
   cout<<"enter a: ";
   cin>>a;
   cout<<"enter b: ";
   cin>>b;
   cout<<"enter c: ";
   cin>>c;
   cout<<"enter d: ";
   cin>>d;
   cout<<"enter e: ";
   cin>>e;
   cout<<"the sum of "<<a<< " and " <<b <<" is "<<sum(a,b)<<endl;
   cout<<"the sum of "<<c<< ", "<< d << " and " <<e <<" is "<<sum(c,d,e)<<endl;
}