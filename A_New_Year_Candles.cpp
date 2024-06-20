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

  int rest=0 ;
    int hour=0;
  while(a)
   {
     if(a<b)
      {
        hour+=a;
        a=0;
        continue;
      }
    int p=a/b;

    hour+=b*p;
    rest=p;
    rest+=a%b;
    a=rest;


   }
   cout<<hour;


  return 0;
}