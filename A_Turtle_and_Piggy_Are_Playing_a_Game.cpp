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
        int a,b;
        cin>>a>>b;
        int score=0;
        int n=1;
        while (1)
        {
            n*=2;
            
            if(n>b)
             break;
            score++;
            
        }
        cout<<score<<endl;
        
    }
    

  return 0;
}