#include<iostream>
using namespace std;
int main()
{
  int t_chocolates=50;
  int s_chocolates=7;
  int remaining_chocolates=t_chocolates%s_chocolates;
  int each_person_gets=t_chocolates/s_chocolates;
  cout<<"Remaining chocolates: "<<remaining_chocolates<<endl;
  cout<<"Each person gets: "<<each_person_gets<<endl;
  return 0;
}