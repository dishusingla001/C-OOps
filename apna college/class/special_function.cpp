// like we know the salary is not public means we did not show it to everyone so we maek it private 
#include<bits/stdc++.h>
using namespace std;
class teacher{
  //properties / attribute
  
  private:
  double salary;

  public:
  string name;
  string dept;
  string subject;
  
  // setter function
  void setSalary(double s){
    salary=s;
  }

  // getter function
  double getSalary(){
    return salary;
  }

  // methods / member functions
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
  
  // so now we can set the private attribute salary with the help of setter 

  t1.setSalary(100000.00);

  // and now we can also get the value of salary with the help of getter

  cout<<t1.getSalary()<<endl;

}