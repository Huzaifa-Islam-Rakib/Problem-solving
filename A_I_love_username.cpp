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
  int a;
  int mx,mn;
  int count=0;

  cin>>a;
  mx=mn=a;
  t--;

  for(int i=0;i<t;i++)
   {
      cin>>a;
       
       if(a>mx)
        {
            mx=a;
            count++;
        }
       if(a<mn)
        {
            mn=a;
            count++;
        }
   }

cout<<count;

  return 0;
}