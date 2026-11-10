#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter first number: ";
    cin>>a;
    cout<<endl<<"enter second number: ";
    cin>>b;
    if(a<b)
    {
        cout<<a<<" is smaller than "<<b<<endl;
    }
    else if(a==b)
    {
        cout<<"smallest= "<<a<<endl;
    }
    else{
        cout<<b<<" is smaller than "<<a<<endl;
    }
}