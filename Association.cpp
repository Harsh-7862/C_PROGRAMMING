
//call by address

#include<iostream>
using namespace std;
void swap(int *x,int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}


int main(){
    int x=10,y=20;
   //swap(x,y);
    swap(&x,&y);
cout <<x<<endl<< y<<endl;

    return 0;
}



//call by reference


#include<iostream>
using namespace std;
void swap(int &x,int &y){
    int temp;
    temp=x;
    x=y;
    y=temp;
}


int main(){
    int x=10,y=20;
   swap(x,y);
   // swap(&x,&y);
cout <<x<<endl<< y<<endl;

    return 0;
}

//call by value
#include<iostream>
using namespace std;
void swap(int x,int y){
    int temp;
    temp=x;
    x=y;
    y=temp;
}


int main(){
    int x=10,y=20;
   swap(x,y);
   // swap(&x,&y);
cout <<x<<endl<< y<<endl;

    return 0;
}





//question by sir error eonst with int &a
#include<iostream>
using namespace std;
void fun( int &a){
    a=20;
}


int main(){
    int x=15;
    fun(x);
cout<<x;
    return 0;
}












