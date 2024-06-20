#include<bits/stdc++.h>
using namespace std;
#define endl '\n';
const int N=1e5+10;
int garr[N];
signed main()
{
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);

   int t;
   cin>>t;

   int n;
   string s;
   string r;


   while (t--)
   {
      cin>>n>>r;
      string unique;
      s=r;
      sort(s.begin(),s.end());
      string ss;
      ss.push_back(s[0]);
      for(int i=1;i<s.size();i++)
       {
         if(s[i]==s[i-1])
          continue;
         ss.push_back(s[i]);
       } 
      s.clear();
      for(int i=ss.size()-1;i>-1;i--)
      { 
         s.push_back(ss[i]);
      }
      
      for(int i=0;i<r.size();i++)
       {
         int temp=s.find(r[i]);
         //cout<<temp<<endl;
         cout<<ss[temp];
         
       }
      cout<<endl;
      
      
       
   }
   
    

  return 0;
}