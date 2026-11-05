#include<iostream>
using namespace std;
int main()
{
  int age = 17;
  bool holdLicense = true;
  if((age > 18)||(holdLicense == true))
  {
    cout<<"You are eligible to drive a car."<<endl;
  }
  else
  {
    cout<<"You are not eligible to drive a car."<<endl;
  }
  return 0;
}