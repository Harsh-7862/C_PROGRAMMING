
#include<iostream>

using namespace std;

int main()
{
   char arr[5]="knot",*ptr,i,*ptr1;
   ptr=&arr[1];
   ptr1=ptr+3;
   *ptr1=101;
   for(i=0;i<4;i++)
  cout<<*ptr++;
   
   
   
    return 0;
}
