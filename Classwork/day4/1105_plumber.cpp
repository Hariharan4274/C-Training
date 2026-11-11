#include<iostream>
using namespace std;
int main()
{
  int callOut = 100;
  int fairPrice = 40;
  int totalHr = 3;
  int totalCost = callOut + (fairPrice * totalHr);
  cout<<"Total cost: " << totalCost << "Rs" << endl;
  return 0;
}