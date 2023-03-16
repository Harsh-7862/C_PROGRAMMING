//cab fare question.


#include<iostream>
using namespace std;
class Cab{
	public:
		int fare;
		Cab() {fare=40;}
		Cab(int fare){
				this->fare=fare;
		}

		void setFare(int d){fare +=d *10;}
		
		int getFare(){return fare;}		
};
int main(){
	Cab ob;Cab ob1;
	int d,cd;
	cout<<"Enter the cab distance :  ";
	cin>>cd;
	cout<<"Enter the distance travelled by user :  ";
	cin>>d;

		if(d<=5) 
			{
	
			Cab ob;
			ob.setFare(d);
			cout<<"Total Bill :  "<<ob.getFare()<<endl;
	
			}
	
			
		else
			{
		Cab ob( 40 + ( cd - 5 ) * 10);
					ob.setFare(d);
						cout<<"Total Bill :  "<<ob.getFare()<<endl;
}	return 0;
}



/*#include<iostream>
using namespace std;
class Employee {
public:
	int eid;
	static int odc;

void show() {cout<<eid<< " "<<odc<<endl;        }
};
int Employee :: odc=0;
int main(){
	Employee e1;
	Employee e2;
	e1.eid=101;
	Employee :: odc = 4;
	e2.eid=201;
//	e2.odc=4;
	
	e1.show();
	e2.show();	
	 return 0;
} */
