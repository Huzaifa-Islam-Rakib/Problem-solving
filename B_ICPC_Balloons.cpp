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
    cin>>s;
    unordered_map<char,int> m;
    for(int i=0;i<n;i++)
     {
        m[s[i]]++;
     }
    int count=0;
    for(char c='A' ; c<='Z';c++)
     {
        if(m[c]==0)
         continue;
        count++;
        count+=m[c];
     }
    cout<<count<<endl;
  }
  


  return 0;
}