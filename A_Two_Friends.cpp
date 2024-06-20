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

    int n;
    while (t--)
    {
        bool flag=0;
        cin>>n;

        for(int i=1;i<=n;i++)
         {
            cin>>garr[i];
         }
        for(int i=1;i<=n;i++)
         {
            if(i== garr[garr[i]])
            {
                flag=1;
                break;
            }
         }
        if(flag)
         {
            cout<<2<<endl;
         }
        else 
         cout<<3<<endl;
    }
    

  return 0;
}
// o(t*n)