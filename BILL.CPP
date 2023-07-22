#include <iostream>

using namespace std;
class Electricity {
protected:
    int id;
    float unit;
    char name[20];
public:
    void Consumer_Details(){
    cout<<"Enter Counsumer Name: ";
    cin>>name;
    cout<<"Enter consumer ID: ";
    cin>>id;
    cout<<"No. of units: ";
    cin>>unit;
    }
};

class Bill:public Electricity{
public:
    int bill=0;
    void Unit_Price(){
    if(unit<=100&&unit>=0){
        bill=unit*5;
    }
    else if(unit<=200&&unit>=101){
        bill=unit*10;
    }
    }
};

class Show: public Bill{
public:
    void Show_Bill(){
        cout<<"\nYour Bill: "<<"\nName: "<<name<<"\nConsumer ID: "<<id<<"\nUnits: "<<ubits;
    }
};


int main()
{
  class Show ele;
  ele.Consumer_Details();
  ele.Unit_price();
  ele.show_Bill();
}
