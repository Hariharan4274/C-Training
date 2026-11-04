#include<iostream>
using namespace std;
int main()
{
  int t_eggs=275;
  int trayeggs=30;
  int t_trays = t_eggs/trayeggs;
  int remaining_eggs = t_eggs%trayeggs;
  cout<<"Total trays: "<<t_trays<<endl;
  cout<<"Remaining eggs: "<<remaining_eggs<<endl;
  return 0; 
}