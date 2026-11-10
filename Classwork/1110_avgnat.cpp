#include<iostream>
using namespace std;
int main(){
  int n;
  int sum = 0;
  int avg;
  cout<<"Enter a number: ";
  cin>>n;
  for(int i=1; i<=n; i++){
    sum+=i;
  }
  avg=sum/n;
  cout<<avg<<endl;
  return 0;
}