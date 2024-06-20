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
        int n;
        cin>>n;
        int a,b;
        a=b=0;
        for(int i=0;i<n;i++)
         {
            int x;
            cin>>x;
            if(x==1)
             a++;
            else
             b++;
         }
        if(b%2)
         {
            a-=2;
            if(a<0 || a%2)
             {
                cout<<"NO"<<endl;
             }
            else 
             {
                cout<<"YES"<<endl;
             }
         }
        else
         {
            if(a%2)
             {
                cout<<"NO"<<endl;
             }
            else
             {
                cout<<"YES"<<endl;
             }
         }
        
    }
    


return 0;
}