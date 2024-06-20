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
        int mx=0;
        int index=0;
        int i;
        for(i=1;i<x;i++)
        {
            int temp=(__gcd(x,i)+i);
            if(temp>mx)
             {
                mx=temp;
                index=i;
             }
        }
        cout<<index<<endl;
    }



return 0;
}