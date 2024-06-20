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
  if(n&1)
  {
    cout<<-1<<endl;
  }
  else 
  {
    for(int i=0;i<n;i++)
     {
        cout<<i+2-2*(i&1)<<" ";
     }
  }


  return 0;
}