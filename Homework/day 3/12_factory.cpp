#include<iostream>
using namespace std;
int main()
{
  int t_pens = 500;
  int pen_in_pack = 12;
  int t_pack = t_pens/pen_in_pack;
  int r_pens=t_pens%pen_in_pack;
  cout<<"Total Packs: "<<t_pack<<endl;
  cout<<"Remaining Pens: "<<r_pens<<endl;
  return 0;
}