#include<iostream>
using namespace std;

class A
{ 
               public:
     int *p;

    A(){
        p= new int;
    }
    

        A(A& ob){//used for deep copy ,for deep copy we need to make our own copy constructor
            p= new int;
            *p=*(ob.p);
                }//till this .
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

*(ob1.p)=45;// deep starts from here
ob1.show();
ob2.show();


   // return 0;
}
          
