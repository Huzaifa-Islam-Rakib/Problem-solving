#include<bits/stdc++.h>
using namespace std;
#define endl '\n';

signed main()
{
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);

  int n,m;
  cin>>n>>m;
  n=min(n,m);

  if(n&1)
   {
    cout<<"Akshat";
   }
  else 
   cout<<"Malvika";


  return 0;
}