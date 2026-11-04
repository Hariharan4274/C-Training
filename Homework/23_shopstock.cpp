#include<iostream>
using namespace std;
int main()
{
  int stock=30;
  int sold = stock-- - 4;
  int left = --stock + sold;
  cout<<"Stocks:"<<stock<<endl;
  cout<<"Sold:"<<sold<<endl;
  cout<<"Left:"<<left<<endl;
  return 0;
}