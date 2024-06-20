#include<bits/stdc++.h>
using namespace std;
#define endl '\n';

signed main()
{
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);

  int n,m;
  cin>>n>>m;

  int ar[n];

  unordered_map<int,int> mp;

  int count=0;
  int unique[n];
  for(int i=0;i<n;i++)
  cin>>ar[i];
  for(int i=n-1;i>=0;i--)
   {
    int x=ar[i];
    if(mp[x]==0)
     {
        count++;
        mp[x]=1;
     }
    unique[i]=count;
   }
   while (m--)
   {
    int x;
    cin>>x;
    cout<<unique[x-1]<<endl;
   }
   



  return 0;
}