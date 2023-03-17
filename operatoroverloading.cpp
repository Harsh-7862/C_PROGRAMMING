// //code for operator overloading.
// #include<iostream>
// using namespace std;
// class Demo
// {
// private:
// int a;
// int b;
// public:
//  void setA(int x){a=x;}
//  int getA(){return a;}
//  void setB(int y){b=y;}
//  int getB(){return b;}
//  void show(){cout<<"a = "<<a <<"& b = "<<b<<endl;}
//  Demo operator +(const Demo & ob2);
// };
// Demo Demo:: operator +(const Demo &ob2){
// Demo temp;
// temp.a=a+ob2.a;
// temp.b=b+ob2.b;
// return temp;
// }
//  int main(){
//     Demo ob1;
//     Demo ob2;
//     Demo res;
//         ob1.setA(15);
//         ob1.setB(25);
//         ob1.show();
        
//         ob2.setA(12);
//         ob2.setB(27);
//         ob2.show();
//           cout<<endl<<"a=a1+a2 & b=b1+b2"<<endl;
//         res =ob1 + ob2; //res=ob1.operator +(ob2)// overloaded assignment operator is used. 
//         res.show();
//     return 0;
// }

//code 2 for preincrement operator
//++ob;//ob.operator++( );


#include<iostream>
using namespace std;
class Demo
{
private:
int a;
int b;
public:
 void setA(int x){a=x;}
 int getA(){return a;}
 void setB(int y){b=y;}
 int getB(){return b;}
 void show(){cout<<"a = "<<a <<"& b = "<<b<<endl;}
 Demo operator +(const Demo & ob2);
 void operator ++();
};
Demo Demo:: operator +(const Demo &ob2){
Demo temp;
temp.a=a+ob2.a;
temp.b=b+ob2.b;
return temp;
}

void Demo:: operator ++()
{
++a;
++b;
}
 int main(){
    Demo ob1;
    Demo ob2;
    Demo res;
        ob1.setA(15);
        ob1.setB(25);
        ob1.show();
        
        ob2.setA(12);
        ob2.setB(27);
        ob2.show();
          cout<<endl<<"a=a1+a2 & b=b1+b2"<<endl;
        res =ob1 + ob2; //res=ob1.operator +(ob2)// overloaded assignment operator is used. 
        res.show();
        ++res;
        res.show();
    return 0;
}
