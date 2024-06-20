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

  int a,b,l;

  for(int i=0;i<t;i++)
   {
    int count=1;
      cin>>a>>b>>l;
    
      
    int x=0,y=0;

    long long int p=1,q=1;

    while(p<=l)
    {
        x++;
        p*=a;
    }
    while(q<=l)
    {
        y++;
        q*=b;
    }
    int ar[x*y]={0};
    p=1,q=1;
    
    for(int j=0;j<x;j++)
     {

        q=1;
        for(int k=0;k<y;k++)
         {
            
            if(l<(p*q))
             continue;
            else 
             {
                if(l%(p*q)==0)
                {ar[count]=l/(p*q);
                 count++;}
                 
             }
            q*=b;

         } 
        p*=a;
        
     }
    int ans=0;

    for(int j=0;j<count;j++)
     {

        if(ar[j]==0)
         continue;
        else 
         {
            ans++;
             
                for(int k=j+1;k<count;k++)
                 {
                    if(ar[k]==ar[j])
                     {
                        ar[k]=0;
                     }
                 }


         }
     }
     cout<<ans<<endl;
    

   }


  return 0;
}