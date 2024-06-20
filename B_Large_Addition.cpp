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
        long long int n;
        cin>>n;
        if(n%10==9)
         {
            cout<<"NO"<<endl;
            continue;
         }
        n/=10;
        int digit;
        int flag=0;
        while(n)
         {
            int last=n%10;
            if(last-1<0)
             {
                cout<<"NO"<<endl;
                flag=1;
                break;
             }
            if(n<10)
             digit=n;
             n/=10;
         }

        if(flag==0 && digit==1)
         {cout<<"YES"<<endl;}
        else if(flag==0)
         cout<<"NO"<<endl;
    }



return 0;
}