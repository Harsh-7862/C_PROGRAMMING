#include<iostream>
using namespace std;
int main(){
   int n=5;
   for(int i=0;i<n;i++)
{
    
    for(int k=1;k<n;k++)
    {
        if((i+k)>(n-1))
        {
            cout<<"*";
        }
        else
        {
            cout<<" ";
        }
    }
    for(int j=0;j<n;j++)
    {
        if(i>=j)
        {
            cout<<"*";
        }
        else
        {
            cout<<" ";
        }
    }cout<<endl;
}
   
 for(int i=1;i<n;i++)  {
    
    for(int k=0;k<n;k++)
    {
        if(k>=i)
        {
            cout<<"*";
        }
        else
        {
            cout<<" ";
        }
    }
    for(int j=0;j<n;j++)
    {
        if((i+j)<(n-1))
        {
            cout<<"*";
        }
        else
        {
            cout<<" ";
        }
    }
    cout<<endl;
}
    return 0;
}
