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
    multiset<int> v;
    for(int i=0;i<n;i++)
     {
        int x;
        cin>>x;
        v.insert(x);
     }
    int count=INT_MAX;
    auto itt=v.begin();
    itt++;
    int i=0;
    for(auto it = v.begin();i<n-1 ;it++,i++,itt++)
    {
        count=min(count,(*itt)-(*it));
        if(count==0)
         break;
    }
    cout<<count<<endl;
    v.clear();
    
  }
  


  return 0;
}