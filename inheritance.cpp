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
