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

    int t;
    cin>>t;
    while (t--)
    {
        int n,f,k;
        cin>>n>>f>>k;
        for(int i=1;i<=n;i++)
         cin>>garr[i];
        int fav=garr[f];
        for(int i=1;i<=n;i++)
         {
            for(int j=1;j<=n-i;j++)
             {
                if(garr[j]<garr[j+1])
                 swap(garr[j],garr[j+1]);
             }
         }
        bool check1=0,check2=0;
        for(int i=1;i<=n;i++)
         {
            if(garr[i]==fav && i<=k)
             check1=1;
            if(garr[i]==fav && i>k)
             check2=1;
             
         }
        if(check1 && check2)
         cout<<"MAYBE";
        else if(check1)
         cout<<"YES";
        else 
         cout<<"NO";
        cout<<endl;
    }
    

  return 0;
}