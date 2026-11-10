#include<iostream>
using namespace std;
int main()
{
  int t_days=1200;
  int t_years=t_days/365;
  int t_months=(t_days%365)/30;
  int r_days=t_days%30;
  cout<<"Time: "<<t_years<<" years, "<<t_months<<" months and "<<r_days<<" days"<<endl;
  return 0;
}