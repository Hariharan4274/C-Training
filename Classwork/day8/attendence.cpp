#include<iostream>
using namespace std;
int main(){
  int attd[5]={28,31,26,30,29};
  for(int j=0;j<5;j++){
    cout<<attd[j]<<endl;
  }
  attd[2]=32;
  cout<<endl;
  for(int i=0;i<5;i++){
    cout<<attd[i]<<endl;
  }
  return 0;
}