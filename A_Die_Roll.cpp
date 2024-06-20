#include<bits/stdc++.h>
using namespace std;
#define endl '\n';

signed main()
{
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);

  int a,b;
  cin>>a>>b;

  a=max(a,b);

  a=6-a+1;
  b=6;
  
  if(a!=0)
   {
      
      for(int i=6;i>0;i--)
       {

            if(a%i==0 && b%i==0)
             {
                a/=i;
                b/=i;
                break;
             }

       }

   }
   else 
    {
        b=1;
    }
   cout<<a<<"/"<<b;



  return 0;
}