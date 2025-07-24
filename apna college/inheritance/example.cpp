#include<bits/stdc++.h>
using namespace std;
class Person{
  public:
  int age;
  string name; 

  Person(){

  }
};

class Student: public Person{
public:
  int rollno;

  Student(int age,string name,int rollno){
    this->age=age;
    this->name=name;
    this->rollno=rollno;
  }

  void getinfo(){
    cout<<"Name:"<<name<<endl;
    cout<<"Age:"<<age<<endl;
    cout<<"Roll Number:"<<rollno<<endl;
  }
};

int main(){
  Student s1(19,"Dishu Singla",1043);
  s1.getinfo();

  // when we create the object of the base class the constructor of the parent class is called first and then of child class
}