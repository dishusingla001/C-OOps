#include<bits/stdc++.h>
using namespace std;
class Person{
  public:
  string name;
};

class Student: public Person{
  public:
  int age;
  int rollnum; 
};

class Graduate:public Student{
  public:
  string research;
};

int main(){
  Graduate s1;
  s1.research="DME";
  s1.name="Dishu Singla";
  s1.age=19;
  s1.rollnum=1043;

  cout<<s1.research<<endl;
  cout<<s1.name<<endl;
  cout<<s1.age<<endl;
  cout<<s1.rollnum<<endl;
}