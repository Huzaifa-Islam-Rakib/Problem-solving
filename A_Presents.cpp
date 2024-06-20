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

  int ar[n];

  int a;
  for(int i=0;i<n;i++)
   {
    cin>>a;
    a--;
    ar[a]=i+1;
   }
   for(int i=0;i<n;i++)
    cout<<ar[i]<<" ";


  return 0;
}