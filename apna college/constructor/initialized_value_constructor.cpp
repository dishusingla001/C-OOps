#include<bits/stdc++.h>
using namespace std;
class Teacher{
  public:
  string name;
  double salary;
  string dept;

  public:
  // as in this class we did not provide any value to the dept and it automatically assign computer science 
  // and one more use case if we know like every teacher is from computer science so then we assign the dept value 
// computer science in the constructor becasue it assign when we create the object of the class

  Teacher(){
    dept="Computer Science";
  }
};
int main(){
  Teacher t1;
  t1.name="Dishu Singla";
  t1.salary=1000000;
  cout<<t1.dept<<endl;
}