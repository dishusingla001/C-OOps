#include<bits/stdc++.h>
using namespace std;
class Father{
  public:
  string Personality;
};

class Mother{
  public:
  string nature;
};

class Child:public Father,public Mother{
  public:
  void p_abd_n(){
    cout<<Personality<<endl;
    cout<<nature<<endl;
  }
};

int main(){
  Child c1;
  c1.nature = "Humble";
  c1.Personality = "Dashing";

  cout<<c1.nature<<endl;
  cout<<c1.Personality<<endl;
 
}