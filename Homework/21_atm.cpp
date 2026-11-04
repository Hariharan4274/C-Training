#include<iostream>
using namespace std;
int main()
{
  int g_amt=4860;
  int t_fhundred=g_amt/500;
  int t_hundred=(g_amt%500)/100;
  int t_fifty=(g_amt%100)/50;
  int t_ten=(g_amt%50)/10;
  cout<<"Total 500 notes: "<<t_fhundred<<endl;
  cout<<"Total 100 notes: "<<t_hundred<<endl;
  cout<<"Total 50 notes: "<<t_fifty<<endl;
  cout<<"Total 10 notes: "<<t_ten<<endl;
  return 0;
}