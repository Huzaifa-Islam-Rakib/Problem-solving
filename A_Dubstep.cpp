#include<bits/stdc++.h>
using namespace std;
#define endl '\n';

signed main()
{
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);

  string s;
  cin>>s;

  int size=s.size();
  bool space=0;
  bool first=0;
  for(int i=0;i<size;i++)
   {
    if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B')
     {
        if(first==0)
        i+=2;
        else if(space==0)
         {
            cout<<" ";
            space=1;
            i+=2;
         }
        else 
         i+=2;
     }
    else 
    {
        cout<<s[i];
        first=1;
        space=0;
    }
   }



  return 0;
}