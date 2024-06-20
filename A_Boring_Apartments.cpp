#include<bits/stdc++.h>
using namespace std;

signed main()
{
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);

  int t;
  cin>>t;

  int m;

  int n;

  for(int i=0;i<t;i++)
   {
    cin>>n;
    
    if(n<10)
      m=1;
    else if(n<100)
     m=3;
    else if(n<1000)
     m=6;
    else 
     m=10;

    n%=10;

    cout<<((n-1)*10)+m   <<'\n';



   }


  return 0;
}