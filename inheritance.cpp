//every animal can run but only lion can roar.

#include <iostream>
using namespace std;
class Animal
{
public:
    void run() { cout << "Running" << endl; }
};
class Lion : public Animal
{
public:
void roar(){cout<<"Roaring"<<endl;}

};

class Dog : public  Animal
{
public:
void bark(){cout<<"Barking"<<endl;}

};


int main(){
Lion l;
//Animal l;

Dog d;
l.run();
d.run();
l.roar();

d.bark();

    return 0;
}





// #include <iostream>
// using namespace std;

// class A
// { public:
//     void show(){cout<<"Showing A"<<endl ;}
// };
// class B
// {public:
//     void show(){cout<<"Showing B"<<endl ;}
// };
// class C : public A, public B
// {
// };
// int main()
// {
// C ob;
// ob.B::show();
// ob.A::show();

//     return 0;
// }
