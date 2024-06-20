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
    short n,a,b;
    cin>>n>>a>>b;
    if(2*a<=b)
     {
        cout<<n*a<<endl;
     }
    else 
     {
        cout<<((b*(n/2)) + (n%2)*a)<<endl;
     }
  }
  


  return 0;
}