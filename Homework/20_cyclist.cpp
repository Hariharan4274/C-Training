#include<iostream>
using namespace std;
int main()
{
  int g_seconds=5000;
  int g_hours=g_seconds/3600;
  int g_minutes=(g_seconds%3600)/60;
  int g_seconds_remaining=g_seconds%60;
  cout<<"Time: "<<g_hours<<" hours, "<<g_minutes<<" minutes and "<<g_seconds_remaining<<" seconds"<<endl;
  return 0;
}