#include<iostream>
using namespace std;
class shop{
    int itemid[30];
    int itemprice[30];
    int counter;
    public:
        void initcounter(void){
            counter=0;
        }
        void setprice(void){
            cout<<"enter your item no: "<<counter+1<<endl;
            cin>>itemid[counter];
            cout<<"enter price of your item: "<<endl;
            cin>>itemprice[counter];
            counter++;
        }
         void display(){
            for (int i=1;i<counter;i++){
                 cout<<"the price of item with id "<<itemid[i]<<" is "<<itemprice[i]<<endl;
            }
         }
};
int main(){
    shop dukan;
    dukan.initcounter();
    dukan.setprice();
    dukan.setprice();
    dukan.setprice();
    dukan.display();
    return 0;
}