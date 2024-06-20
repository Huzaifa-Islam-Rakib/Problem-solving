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
    map<int ,int >v;

    for(int i=0;i<n;i++)
     {
        int a,b;
        cin>>a>>b;
        if(a<=10)
         {
            v[b]=i+1;
         }
     }
    
    auto it=v.end();
    it--;
    cout<<(*it).second<<endl;
    v.clear();

  }
  


  return 0;
}