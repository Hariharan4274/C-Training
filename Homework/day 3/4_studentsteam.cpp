#include<iostream>
using namespace std;
int main()
{
  int t_students=85;
  int team_std=6;
  int t_teams=t_students/team_std;
  int r_students=t_students%team_std;
  cout<<"Total teams: "<<t_teams<<endl;
  cout<<"Remaining students: "<<r_students<<endl;
  return 0;
}