#include <iostream>
using namespace std;
int main()
{
   float num1, num2;
   char op;
   cout << "Enter number 1" << endl;
   cin >> num1;
   cout << "Enter number 2" << endl;
   cin >> num2;

   cout << "Enter the operation for calculation" << endl;
   cin >> op;
   switch (op){
      case '+' :
        cout<<num1 <<" + "<<num2 <<" = "<< num1 + num2;
        break;
        
      case '-' :
        cout<<num1 <<" - "<<num2 <<" = "<< num1 - num2;
        break;
      case '*' :
        cout<<num1 <<" * "<<num2 <<" = "<< num1 * num2;
        break;
      case '/' :
        cout<<num1 <<" / "<<num2 <<" = "<< num1 / num2;
        break;
    default:
    cout<<"Error,operator or the numbers are wrong";
    break;

   }
      return 0;
}