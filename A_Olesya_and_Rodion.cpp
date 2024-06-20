#include<bits/stdc++.h>
using namespace std;
#define endl '\n';

signed main()
{
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);

  int n,t;
  cin>>n>>t;
  
  if(n==1 && t==10)
   {
    cout<<-1;
    return 0;
   }
   int ans=t;
   if(t<10)
   {
   for(int i=0;i<n;i++)
    {
        cout<<t;
    }
   }
   else 
   {
    for(int i=0;i<n-1;i++)
     {
        cout<<1;
     }
    cout<<0;
   }

  return 0;
}