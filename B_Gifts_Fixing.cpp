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
    int ar[n];
    int br[n];
    int mina,minb;
    mina=minb=INT_MAX;
    for(int i=0;i<n;i++){
     cin>>ar[i];
     mina=min(mina,ar[i]);
     }
    for(int i=0;i<n;i++){
     cin>>br[i];
     minb=min(minb,br[i]);
    }
    long long  count=0;

    for(int i=0;i<n;i++)
    {
        count+=max(abs(mina-ar[i]),abs(minb-br[i]));
    }
    cout<<count<<endl;




  }
  


  return 0;
}