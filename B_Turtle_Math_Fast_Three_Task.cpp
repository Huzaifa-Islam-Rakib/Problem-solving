#include<bits/stdc++.h>
using namespace std;

signed main()
{
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);

  int t;
  cin>>t;


  int n;
  int a;

  for(int i=0;i<t;i++)
   {
        cin>>n;
        int move=0;

        int sum=0,a1=0,a2=0;

        for(int j=0;j<n;j++)
         {
            cin>>a;
              sum+=a;
            if(a%3==1)
             a1++;
            else if(a%3==2)
             a2++;
         }

        if(sum%3==0)
         {
            cout<<0<<'\n';
            continue;
         }
        move=3-sum%3;
        if(n==1)
         cout<<1<<'\n';
        else if(move==2)
         {
            if(a1>0)
             cout<<1<<'\n';
            else 
             cout<<2<<'\n';
         }
        else 
         {
            cout<<1<<'\n';
         }
         

   }


  return 0;
}