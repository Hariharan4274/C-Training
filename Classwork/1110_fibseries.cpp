#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter a number: ";
  cin>>n;
  int sum = 0;
  int n1 = 0;
  int n2 = 1;
  for(int i=1; i<=n; i++){
    cout<<n1<<endl;
    sum = n1+n2;
    n1=n2;
    n2=sum;
  }
  return 0;
}