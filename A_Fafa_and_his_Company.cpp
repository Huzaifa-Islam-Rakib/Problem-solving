#include<bits/stdc++.h>
using namespace std;
#define endl '\n';

signed main()
{
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);

  int n;
  cin>>n;
  int count=0;

  for(int i=1;i<=n/2;i++)
   {
    if(n%i==0)
     count++;
   }
  cout<<count;


  return 0;
}