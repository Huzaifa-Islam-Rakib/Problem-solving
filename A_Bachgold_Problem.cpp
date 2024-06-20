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
  
  cout<<n/2<<endl;

  for(int i=0;i<(n/2)-1;i++)
   {
    cout<<2<<" ";
   }
  cout<<2+(n%2);

  return 0;
}