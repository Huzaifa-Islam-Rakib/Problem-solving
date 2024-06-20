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
  int k;
  for(int i=0;i<t;i++)
   {
        cin>>n;
        int ar[n];

        int a=0,b=0;

        for(int j=0;j<n;j++)
         {
            cin>>k;
            if(k%2==0)
             a++;
            else 
             b++;
            ar[j]=k%2;

         }
        if(n%2==0)
         {
            if(a!=b)
             {
                cout<<-1<<'\n';
                continue;
             }

         }
        else 
         {
            if(a!=b+1)
             {
                cout<<-1<<'\n';
                continue;
             }
         }
        
        int miss=0;

        for(int j=0;j<n;j++)
        {
            if(j%2!=ar[j])
            miss++;
        }

        cout<<miss/2<<'\n';



   }
   


  return 0;
}