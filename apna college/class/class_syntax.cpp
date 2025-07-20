


#include<bits/stdc++.h>
using namespace std;
class teacher{
  //properties / attribute
  public:
  string name;
  string dept;
  string subject;
  double salary;

  // mthods / member functions
  void changedept(string newdept){
    dept=newdept;
  }

};
int main(){
  // create objects 
  teacher t1;
  t1.name = "Rohit Sharma";
  t1.dept = "Computer Science";
  t1.subject = "C++ (DSA)";
  t1.salary = 100000.00;

  cout<<t1.name<<endl;
}