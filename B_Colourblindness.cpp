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
  while (t--)
  {
    int n;
    cin>>n;
    string s,ss;
    cin>>s>>ss;
    bool flag=0;
    for(int i=0;i<n;i++)
     {
        if(s[i]!=ss[i])
         {
            if(s[i]=='R' || ss[i]=='R')
             {
                cout<<"NO"<<endl;
                flag=1;
                break;
             }
         }
     }
     if(flag==0)
      cout<<"YES"<<endl;
  }
  


  return 0;
}