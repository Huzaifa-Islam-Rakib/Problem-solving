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

  unordered_map<string,string> mp;

  for(int i=0;i<m;i++)
  {
    string s,ss;
    cin>>s>>ss;
    if(s.size()<=ss.size())
     mp[ss]=s;
    else 
     {
        mp[s]=ss;
     }
  }
    string s; 
  for(int i=0;i<n;i++)
  {

    cin>>s;
    string x=mp[s];
    if(x=="")
     cout<<s<<" ";
    else 
     cout<<mp[s]<<" ";
     
  }


  return 0;
}