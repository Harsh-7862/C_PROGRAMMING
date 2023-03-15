
#include<iostream>

using namespace std;

class Employee
{
  int eid;
  float sal;
public:
  void setEid (int id)
  {
    eid = id;
  }
  int getEid ()
  {
    return eid;
  }

  void setSal (float s)
  {
    sal = s;
  }
  float getSal ()
  {
    return sal;
  }
};

int
main ()
{ Employee e;
e.setEid(101);
e.setSal(27800);
cout<<"Eid:"<<e.getEid()<<endl;
cout<<"Salary:"<<e.getSal()<<endl;


  return 0;
}
