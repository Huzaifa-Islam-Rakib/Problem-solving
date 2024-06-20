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

  string ar[t];

  for(int i=0;i<t;i++)
   cin>>ar[i];
  
  int mx=1;
  string ans=ar[0];

  for(int i=0;i<t;i++)
   {
      int count=0;
       for(int j=i;j<t;j++)
        {
          if(ar[i]==ar[j])
           count++;
          if(mx<count)
           {
            mx=count;
            ans=ar[i];
           }
        }


   }
   cout<<ans;

  return 0;
}