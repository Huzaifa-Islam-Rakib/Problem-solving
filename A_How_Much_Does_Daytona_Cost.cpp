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
    int a,b;
    cin>>a>>b;
    unordered_map<int,int>m;
    for(int i=0;i<a;i++)
    {
        int x;
        cin>>x;
        m[x]=1;
    }
    if(m[b])
     {
        cout<<"YES"<<endl;
     }
    else 
     cout<<"NO"<<endl;
    m.clear();

  }
  


  return 0;
}