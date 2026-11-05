#include<iostream>
using namespace std;
int main()
{
  int km = 150;
  int petrol = 12;
  int mileage = km/petrol;
  float mileage1 = (float)km/petrol;
  cout<<"Mileage: " << mileage << "km/L" << endl;
  cout<<"Mileage1: "<< mileage1 << "km/L" << endl;
  return 0;
}