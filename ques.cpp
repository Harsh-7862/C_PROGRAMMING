#include<iostream>
using namespace std;

class A
{ 
               public:
     int *p;

    A(){
        p= new int;
    }
    void show(){cout<<"Data : "<<*p<<endl;}
};

// class B : public A
// { public:


// };


int main()
{
A ob1;
*(ob1.p)=25;
ob1.show();
A ob2 = ob1;
ob2.show();
   // return 0;
}
          
