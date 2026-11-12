#include<iostream>
using namespace std;
int main(){
  int user;
  int isfound=0;
  cin>>user;
  int locker[5]={14,27,31,27,42};

  for(int i=0; i<size(locker); i++){
    if(locker[i]==user){
      cout<<"Match found at "<<"locker no "<<i+1<<endl;
      isfound=1;
      break;
    }
  }
  if(isfound!=1){
    cout<<"Not found"<<endl;
  }
  return 0;

}