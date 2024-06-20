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

    int n;
    cin>>n;
    garr[1]=8;
    garr[2]=4;
    garr[3]=2;
    garr[4]=6;
    if(n==0)
    {
        cout<<1;
        return 0;
    }
    int a=n%4;
    if(a==0)
     a=4;

    if(a==1)
     {
        if((n+1)%4==1)
         a=4;
     }
    cout<<garr[a];
    

  return 0;
}