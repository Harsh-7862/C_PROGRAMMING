#include<stdio.h>
int main(){
int a;


printf("Please enter a number for it's table : ");
scanf("%d",&a);

for(int i=1;i<=10;i++){

    int z;
    z=i*a;
    printf("%d \t",z);

}
    return 0;
}