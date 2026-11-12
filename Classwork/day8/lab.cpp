#include<iostream>
using namespace std;
int main(){
  cout<<"Enter a no of values: "<<endl;
  int len;
  cin>>len;
  int reading[len];
  cout<<"Enter a elements: "<<endl;
  for(int i=0;i<len;i++){
    cin>>reading[i];
  }
  cout<<"The readings are "<<endl;
    for(int j=0;j<len;j++){
    cout<<reading[j]<<" ";
  }
  return 0;
  
}