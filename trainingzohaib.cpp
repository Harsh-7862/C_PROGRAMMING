#include<iostream>
using namespace std;


int Divisible(int n, int x, int y){
int count=0;
for(int i=1;i<=n;i++){
if(i%x==0 && i%y == 0)
count++;
}

    return count;
}

int main(){
int x,y,n;
cin>>n>>x>>y;
cout<<Divisible(n,x,y)<<endl;
    return 0;
}