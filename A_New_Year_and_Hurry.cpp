#include<bits/stdc++.h>
using namespace std;
#define endl '\n';

signed main()
{
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);

  int n;
  cin>>n;
  int time;
  cin>>time;
  time=240-time;

  int count=0;

  for(int i=1;i<=n;i++)
  {
    time-=5*i;
    if(time<0)
     break;
    count++;
    
  }
  cout<<count;


  return 0;
}