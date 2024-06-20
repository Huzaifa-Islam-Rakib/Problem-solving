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
    string s;
    for(int i=0;i<n;i++)
     {
        char c;
        cin>>c;
        s.push_back(c);
     }
    int count=0;
    int mx=0;
    for(int i=0;i<n;i++)
     {
        if(s[i]=='1')
         {
            mx=max(mx,count);
            count=0;
         }
        else 
        {
            count++;
        }
     }
    mx=max(count,mx);
    cout<<mx<<endl;
  }
  


  return 0;
}