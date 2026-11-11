#include<iostream>
using namespace std;
int main(){
   for(int i=1; i<=30; i++){
    if(i%5==0){
      continue;
    }
    cout<<i<<endl;
    cout<<"Print Completed"<<endl;
  }
  return 0;
}