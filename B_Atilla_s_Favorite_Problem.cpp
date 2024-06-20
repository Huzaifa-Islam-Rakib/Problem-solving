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
    int n;
    cin>>n;
    string s;
    cin>>s;
    int count=0;
    for(int i=0;i<s.size();i++)
    {
        count=max(count,s[i]-'a'+1);
    }
    cout<<count<<endl;
  }
  


  return 0;
}