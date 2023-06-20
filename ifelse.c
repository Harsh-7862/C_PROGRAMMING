#include<stdio.h>
void main(){
int age;
printf("Enter your age to check eligiblity : \n");
scanf("%d",&age);
if(age<=18){
    printf("You are eligible.");
}
else{
    printf("You are not eligible.");
}
}