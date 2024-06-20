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

  int h,m;

  for(int i=0;i<t;i++)
  {
    cin>>h>>m;
    cout<<(((24-h-1)*60) + (60-m))<<endl;
  }


  return 0;
}