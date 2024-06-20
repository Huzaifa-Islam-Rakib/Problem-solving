#include<bits/stdc++.h>
using namespace std;

signed main()
{
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);

  string  s;
  cin>>s;

  int p=0;
  for(int i=0;i<s.size();i++)
    {
        if(s[i]<='Z' && s[i]>='A')
           p++;
    }
   if(s.size()==1)
    {
        if(s[0]<='z' && s[0]>='a')
          {
            s[0]-=32;
            cout<<s[0];
          }
        else
        {
            s[0]+=32;
            cout<<s[0];
        }

        return 0;
    }

  if((s[0]<='Z' && s[0]>='A' && p==s.size()))
   {
       

        for(int i=0;i<s.size();i++)
         {
            s[i]+=32;
            cout<<s[i];

         }
   }
   else if((s[0]<='z' && s[0]>='a' && p==s.size()-1 ) )
   {
     s[0]-=64;
     for(int i=0;i<s.size();i++)
      {
        s[i]+=32;
        cout<<s[i];
      }


   }

   
   else 
    cout<<s;


  return 0;
}