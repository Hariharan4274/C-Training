#include<iostream>
using namespace std;
int main()
{
  int t_std=1430;
  int bus_cap=50;
  int t_bus=t_std/bus_cap;
  int r_std=t_std%bus_cap;
  cout<<"Total buses: "<<t_bus<<endl;
  cout<<"Remaining students: "<<r_std<<endl;
  return 0;
}