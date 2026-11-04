#include<iostream>
using namespace std;
int main()
{
  int f_price = 50;
  int fair_price = 12;
  int t_km= 15;
  int total_travelled= f_price+(t_km * fair_price);
  cout<<"Total travelled: "<<total_travelled<<endl;
  return 0;

}