#include<iostream>
using namespace std;
int main()
{
unsigned int stock_counter = 5;
unsigned int customer_buys = 7;

stock_counter -= customer_buys;

cout << "Remaining stock: " << stock_counter << endl;
  return 0;
}