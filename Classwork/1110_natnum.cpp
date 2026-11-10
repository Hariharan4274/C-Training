#include<iostream>
using namespace std;
int main()
{
  int usernum;
  int count=1;
  cout<<"Enter a number: ";
  cin>>usernum;
  while(count<=usernum){
    cout<<count<<endl;
    count++;
  }
  return 0;
}