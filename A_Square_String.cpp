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
  string ss;

  int middle;
  
  for(int i=0;i<t;i++)
   {
    cin>>s;
    if(s.size()%2!=0)
     {
        cout<<"NO"<<endl;
     }
    else if(s.size()==2)
     {
      if(s[0]==s[1])
      { cout<<"YES"<<endl;}
      else
       cout<<"NO"<<endl;
      
     }
    else 
     {
        ss=s;
        middle=s.size()/2;
        s.erase(0,middle);
        ss.erase(middle,middle);
        if(ss==s)
         cout<<"YES"<<'\n';
        else
         cout<<"NO"<<endl;
        

     }
   }


  return 0;
}