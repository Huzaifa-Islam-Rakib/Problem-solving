#include<bits/stdc++.h>
using namespace std;
#define endl '\n';

signed main()
{
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);

  int t;
  cin>>t;
  while (t--)
  {
    int x,y;
    cin>>x>>y;
    if(2*x<=y)
     {
        cout<<x<<" "<<2*x<<endl;
     }
    else 
     cout<<-1<<" "<<-1<<endl;
  }
  


  return 0;
}