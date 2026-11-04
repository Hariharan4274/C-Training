#include<iostream>
using namespace std;
int main()
{
  int t_speed=12;
  int t_time=10;
  int t_water=t_speed*t_time;
  int u_water=35;
  int r_water=t_water-u_water;
  cout<<"Remaining water in tank: "<<r_water<<endl;
  return 0;
}