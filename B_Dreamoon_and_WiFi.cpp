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

    string s,ss;
    cin>>s>>ss;

    int ans=0;

    for(int i=0;i<s.size();i++)
     {
        if(s[i]=='+')
         ans++;
        else 
         ans--;

     }
    int count=1;
    for(int i=0;i<ss.size();i++)
     {
        if(ss[i]=='+')
         {
            for(int j=1;j<=count;j++)
             garr[j]++;
         }
        else if(ss[i]=='-')
         {
            for(int j=1;j<=count;j++)
             garr[j]--;
         }
        else 
         {
            count*=2;
            for(int j=(count/2)+1;j<=count;j++)
             {
                garr[j]=garr[j-(count/2)];
             }
            for(int j=1;j<=count/2;j++)
             garr[j]++;
            
            for(int j=(count/2)+1;j<=count;j++)
             {
                garr[j]--;
             }
         }
     }
    int print=0;
    for(int i=1;i<=count;i++)
     {
        if(garr[i]==ans)
         print++;
        
     }
    
    if(print>=count)
    {
        cout<<print/count;
        cout<<".";
        print%=count;
    }
    else 
     {
         cout<<0<<".";
     }
     
    for(int i=0;i<9;i++)
    {
        print*=10;
        cout<<print/count;
        print%=count;

    }
    
    

    

  return 0;
}