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
  string s;
  string ss {"codeforces"};
  for(int i=0;i<t;i++)
   {
        cin>>s;
        int count=0;

        for(int j=0;j<10;j++)
         {
            if(s[j]!=ss[j])
             count++;
         }
        cout<<count<<endl;
   }


  return 0;
}