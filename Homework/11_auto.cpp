#include<iostream>
using namespace std;
int main()
{
  int f_price = 30;
  int fair_price = 9;
  int t_km= 18;
  int total_travelled= f_price+(t_km * fair_price);
  cout<<"Total travelled: "<<total_travelled<<endl;
  return 0;
}