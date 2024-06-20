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
    
    int breakdown=(n/2)-1;
    if(breakdown<0)
     {
        cout<<1<<endl;
        continue;
     }
    int p=0;
    for(int i=0;p<=breakdown;p++)
     {
        if(s[i]==s[s.size()-1])
         {
            break;
         }
        else 
        {
            s.erase(0,1);
            s.pop_back();
        }
     }
   
   cout<<s.size()<<endl;
    
   
     
  }
  


  return 0;
}