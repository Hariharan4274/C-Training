#include<iostream>
using namespace std;
int main()
{
  int t_unit = 250;
  int f_charge = 2;
  int s_charge = 3;
  int t_cost = (100*f_charge) + ((t_unit-100)*s_charge);
  cout<<"Total cost: " << t_cost << "Rs" << endl;
  return 0;
}