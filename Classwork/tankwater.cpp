#include<iostream>
using namespace std;
int main()
{
  int speed = 15;
  int time = 8;
  int t_water= speed * time;
  int out_water= 20;
  int remaining_water= t_water-out_water;
  cout<<"Remaining water in tank: "<<remaining_water<<endl;
  return 0;
}