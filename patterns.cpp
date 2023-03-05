// for reversing triangle pattern using while loop
//#include <iostream>
// using namespace std;
// int
// main ()
// {
//   int rows;
//   cout <<
//     "This program is to print start pattern as a right angled triangle with user defined rows"
//     << endl << endl;
//   cout << "Enter the number of rows: ";
//   cin >> rows;

//   int i = rows;//if i=1
//   while (i >0)//i<=rows
//     {
//       int j = 1;
//       while (j <= i)
// 	{
// 	  cout << "*";
// 	  j++;
// 	}
//       cout << endl;
//       i--;//++
//     }

//   return 0;
// }







// #include <iostream>
// using namespace std;
// int main() {
//     int rows;
//     cout<<"This program is to print start pattern as a right angled triangle with user defined rows"<<endl<<endl;
//     cout << "Enter the number of rows: ";
//     cin >> rows;

//     int i = 1;
//     while (i <= rows) {
//         int j = 1;
//         while (j <= i) {
//             cout << "*";
//             j++;
//         }
//         cout <<endl;
//         i++;
//     }

//     return 0;
// }

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
// #include <iostream>

// using namespace std;

// int main() {
//    int num;
//    cout<<"Enter the number for making table \n"<<endl;
//    cin>>num;

//    for (int i = 1; i <= 10; i++) {
//       cout << num << " * " << i << " = " << num*i << endl;
//    }
// return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int i, n;
//     cout << "Enter the value for table";
//     cin >> n;
//     for(int i=1;i<=10;i++){
//         cout<<n<<"*"<<i<<"="<<<<endl;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=5;i>=0;i--){
//         for(int j=0;j<=i;j++){
//             cout<<" * ";
//     }cout<<endl;

//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=4;i>=1;i--)
//     {
//         for(int j=0;j<=i;j++){
//             cout<<"*";
//         }cout<<endl;

//     }
// return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
// for(int i=1;i<5;i++){
//     for(int j=0;j<=i;j++){
//         cout<<"*";
//     }cout<<endl;
// }
//     return 0;
// }

// unstructured table of 2
//  #include<iostream>
//  using namespace std;
//  int main(){
//      int num=2;
//      for(int i=1;i<=10;i++){
//          cout<<num*i<<endl;
//      }

//     return 0;
// }

// for standard table making
