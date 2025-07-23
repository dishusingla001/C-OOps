#include<bits/stdc++.h>
using namespace std;
class Teacher{
  public:
  string name;
  double salary;
  string dept;

  public:
  Teacher(string name,double salary,string dept){
    this->name=name;
    this->salary=salary;
    this->dept=dept;
  }

  void getinfo(){
    cout<<"Name:"<<name<<endl;
    cout<<"Salary:"<<salary<<endl;
    cout<<"Department:"<<dept<<endl;
  }
};
int main(){
  Teacher t1("Dishu Singla",1000,"Computer Science");
  // cout<<t1.dept<<endl;
  // t1.getinfo();

  // this is the copy constructor in which we pass the another object and the info is get copied in that
  // and also called default copy constructor 

  // now this is the default copy constructor and if we want we can create custom copy constructor then
  // copy constructor is not run 
  
  Teacher t2(t1);
  t2.getinfo();

}