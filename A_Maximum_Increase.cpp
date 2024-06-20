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
  int count=1;

  int ans=1;
  int ar[n];
  for(int i=0;i<n;i++)
   {
    cin>>ar[i];
   }
  for(int i=1;i<n;i++)
   {
    if(ar[i]>ar[i-1])
     count++;
    else 
    {
        ans=max(count,ans);
        count=1;
    }
    ans=max(count,ans);
   }

  cout<<ans;
  return 0;
}