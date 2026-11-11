#include<iostream>
using namespace std;
int main()
{
  int celsius = 37;
  float fahrenheit = ((float)celsius * 9/5) + 32;
  int  fahrenheit1 = (celsius * 9/5) + 32;
  cout<<"Temperature in Fahrenheit: " << fahrenheit << "°F" << endl;
  cout<<"Temperature in Fahrenheit1: " << fahrenheit1 << "°F" << endl;
  return 0;
}