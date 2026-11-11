#include<iostream>
using namespace std;
int main()
{
  int g_name;
  cout<< "Enter a Number: " << endl;
  cin >> g_name;
  if(g_name>0){
    g_name+=1;
    cout<<g_name<<endl;
  }
  else{
    cout<<g_name<<endl;
  }
  return 0;
}