#include<iostream>
using namespace std;
int main()
{
  int a_price=450;
  int c_price = 225;
  int t_a= 3;
  int t_c= 2;
  int total_cost= (a_price*t_a)+(c_price*t_c);
  cout<<"Total cost of train tickets: "<<total_cost<<endl;
  return 0;
}