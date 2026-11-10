#include<iostream>
using namespace std;
int main()
{
  int token=407;
  int digit=0;
  while(token>0)
  {
    digit+=token%10;
    digit*=10;
    token/=10;
  }
  cout<<"Reversed token: "<<digit/10<<endl;
  return 0;
}