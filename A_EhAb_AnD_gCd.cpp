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
    if(n==2)
     {
        cout<<1<<" "<<1<<endl;
        continue;
     }
    if(n&1)
     {
        cout<<1<<" "<<n-1<<endl;
     }
    else 
     {
        cout<<2<<" "<<n-2<<endl;
     }
  }
  


  return 0;
}