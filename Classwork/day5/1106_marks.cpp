#include<iostream>
using namespace std;
int main()
{
  int bonus = 5;
  int Ravi_att = 94;
  int Ravi_marks = 78;
  int Meena_att = 85;
  int Meena_marks = 82;
  if(Ravi_att>90){
    Ravi_marks+=bonus;
    cout<<"Ravi's marks: "<<Ravi_marks<<endl;
  }
  if(Meena_att>90){
    Meena_marks+=bonus;
    cout<<"Meena's marks: "<<Meena_marks<<endl;
  }
  else{
    cout<<"Meena's marks: "<<Meena_marks<<endl;
  }
  return 0;
}