#include<bits/stdc++.h>
using namespace std;
#define endl '\n';
const int N=1e5+10;
int Global[N];
signed main()
{
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);

    int t;
    cin>>t;
    while (t--)
    {
        int x;
        cin>>x;
        int ar[x-1];
        for(int i=2;i<=x;i++)
         {
            int count=0;

            for(int j=1;i*j<=x;j++)
             {
                count+=i*j;
             }
            ar[i-2]=count;
         }
        int index=0;
        int mx=0;
        for(int i=0;i<x-1;i++)
         {
            if(ar[i]>mx)
             {
                mx=ar[i];
                index=i;
             }
         }
        cout<<index+2<<endl;
        
        
    }
    


return 0;
}