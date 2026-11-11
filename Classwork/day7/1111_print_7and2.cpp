#include<iostream>
using namespace std;
int main(){
   for(int i=1; i<=30; i++){
    if(i%7==0||i%2==0){
      continue;
    }
    cout<<i<<endl;
  }
  return 0;
}