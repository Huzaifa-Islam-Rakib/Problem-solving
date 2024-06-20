#include<bits/stdc++.h>
using namespace std;

signed main()
{
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);

  int a,b;
  cin>>a>>b;

  bool flag=0;
  
  char c;
  for(int i=0;i<a*b;i++)
  {
    cin>>c;
    if(c=='C' || c=='M' || c=='Y')
     flag=1;
  }

    if(flag)
     cout<<"#Color";
    else 
     cout<<"#Black&White";



  return 0;
}