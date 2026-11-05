#include<iostream>
using namespace std;
int main()
{
  int marks = 90;
  int attendence = 72;
  if((marks > 85)&&(attendence > 90))
  {
    cout<<"You are eligible for scholarship."<<endl;
  }
  else
  {
    cout<<"You are not eligible for scholarship."<<endl;
  }
  return 0;
}