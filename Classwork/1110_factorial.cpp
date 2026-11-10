#include<iostream>
using namespace std;
int main()
{
  int n;
  int res = 1;
  cout<<"Enter a number: "<<endl;
  cin>>n;
  for(int i=1; i<=n; i++){
    res*=i;
  }
  cout<<res;
  return 0;
}