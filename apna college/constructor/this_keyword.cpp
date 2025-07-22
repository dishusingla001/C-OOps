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
  cout<<t1.dept<<endl;
  t1.getinfo();
}