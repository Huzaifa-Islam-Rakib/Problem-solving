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
    if(a==b)
     {
        cout<<0<<endl;
        continue;
     }
    int count=0;
    if(a>b)
     {
        if(a%2==b%2)
         count=1;
        else 
         count=2;
     }
    else 
    {
        if(a%2==b%2)
         count=2;
        else 
         count=1;
    }
    cout<<count<<endl;
    
  }
  


  return 0;
}