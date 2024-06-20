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
    unordered_map<int,int>m;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        m[x]++;
    }
    auto it=m.begin();
    for( ; it!=m.end();it++)
    {
        
        if((*it).second>2)
         {
            cout<<(*it).first<<endl;
            break;
         }
    }
    if(it==m.end())
     {
        cout<<"-1"<<endl;
     }
  }
  


  return 0;
}