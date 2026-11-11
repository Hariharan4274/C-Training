#include<iostream>
using namespace std;
int main(){
  int notebooks = 40;
  int n_price = 18;
  int investment = n_price * notebooks;
  int s_price = 25;
  int profit = (s_price - n_price) * notebooks;
  cout<<"Profit: "<<profit<<endl;
  return 0;
}