#include<iostream>
using namespace std;
int main(){
int n;
  cout<<"Enter the value for printing the table of entered value :";
  cin>>n;
  cout<<endl;
  for(int i=1;i<=n;i++){
  for(int j=1;j<=i;j++)
  {
  cout<<i*n;
  }cout<<endl;
  }
  
return 0;
}
