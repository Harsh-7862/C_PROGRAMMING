
#include<iostream>
using namespace std;

class Vehicle
{ public:
virtual void accl(){cout<<"Accelerating at 100 kmph"<<endl;}

};

class Car : public Vehicle
{ public:
void accl(){cout<<"Accelerating at 140 kmph"<<endl;}
void brake(){cout<<"Braking ...."<<endl;}
};


int main(){
//actually when we call child class car then acceleration becomes 140 , before call it ,accl was 100kmph
Car ob;
   // Car *ob = new Car();
    Vehicle& obj=ob;
      obj.accl();
    // obj.brake();
    
}
          
