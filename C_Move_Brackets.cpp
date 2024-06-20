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

  int n;

  string s;
  for(int i=0;i<t;i++)
   {
    cin>>n>>s;
    int count=0;
    int track=0;

    for(int j=0;j<n;j++)
     {
         if(s[j]=='(')
          track++;
         else if(s[j]==')' && track==0)
          count++;
         else 
          track--;
     }
     cout<<count<<endl;

   }


  return 0;
}