#include<bits/stdc++.h>
using namespace std;
#define endl '\n';

signed main()
{
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);

  int s,n;
  cin>>s>>n;

  vector<pair<int,int>> v;

  for(int i=0;i<n;i++)
  {
    int x,y;
    cin>>x>>y;
    v.push_back({x,y});
  }
  sort(v.begin(),v.end());
  
  for(int i=0;i<n;i++)
  {
    if(s>v[i].first)
     {
        s+=v[i].second;
     }
    else 
     {
        cout<<"NO"<<endl;
        return 0;
     }
  }
  cout<<"YES"<<endl;
  return 0;
}