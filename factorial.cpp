#include<iostream>
using namespace std;
int main(){
    int fact=1,i,number;
    printf("Enter a number : ");
    scanf("%d",&number);
    for(i=1;i<=number;i++){
fact=fact*i;
    }
printf("Factorial of %d is : %d",number , fact);

return 0;


}