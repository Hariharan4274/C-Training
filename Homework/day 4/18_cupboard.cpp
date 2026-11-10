#include<iostream>
using namespace std;
int main()
{
  int code=7351;
  int digit=0;
  while(code>0)
  {
    digit+=code%10;
    code/=10;
  }
  cout<<digit<<endl;
  return 0;
}