#include<bits/stdc++.h>
using namespace std;
#define endl '\n';

map<int ,int > ar;
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
    long long  count=0;

    for(int i=0;i<n;i++)
     {
        int x;
        cin>>x;
        x-=i;
        
            count+=ar[x];
            ar[x]++;
        
        //cout<<ar[x]<<" "<<count<<endl;
        
     }
     cout<<count<<endl;
     ar.clear();
  }
  


  return 0;
}