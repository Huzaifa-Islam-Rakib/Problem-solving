#include<bits/stdc++.h>
using namespace std;
#define endl '\n';

signed main()
{
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);

  int t;
  string s;
  cin>>t;

  for(int i=0;i<t;i++)
   {
    cin>>s;
    int count=0;
    for(int j=0;j<s.size();j++)
     {
        if(s[j]!='0')
         count++;
     }
     cout<<count<<endl;
    for(int j=0;j<s.size();j++)
     {
        if(s[j]=='0')
         continue;
        else 
         {
            cout<<s[j];
             for(int k=j+1;k<s.size();k++)
              cout<<0;
            cout<<" ";
         }
     }
     cout<<endl;
   }


  return 0;
}