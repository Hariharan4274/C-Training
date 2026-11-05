#include<iostream>
using namespace std;
int main(){
  int code = 4827;
  int digit = 0;
  while(code > 0){
    digit += code % 10;
    code = code / 10;
  }
  cout<<digit<<endl;
  return 0;
}