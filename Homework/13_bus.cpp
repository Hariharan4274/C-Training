#include<iostream>
using namespace std;
int main()
{
  int b_journey= 200;
  int  j_hours= b_journey/60;
  int j_minutes= b_journey%60;
  cout<<"Journey time: "<<j_hours<<" hours and "<<j_minutes<<" minutes"<<endl;
  return 0;
}