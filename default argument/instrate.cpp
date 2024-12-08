#include<iostream>
using namespace std;
float bankmoney(int current_money,float factor=1.04 ){
    return current_money*factor;
}
int main(){
    int money=100000;
    cout<<"the instrate of your "<<money<<" amout is "<<bankmoney(money)<<endl;
    cout<<"the instrate of your "<<money<<" amout is "<<bankmoney(money,1.1)<<" if you are vip";
}