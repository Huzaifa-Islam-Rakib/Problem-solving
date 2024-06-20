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
    if(a==1)
     {
        cout<<0<<endl;
     }
    else if(a==2 )
    {
        cout<<b<<endl;
    }
    else 
     {
        cout<<2*b<<endl;
     }
     
  }
  


  return 0;
}