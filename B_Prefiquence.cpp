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
        int n,m;
        cin>>n>>m;
        string s1,s2;
        cin>>s1>>s2;
        int count=0;
        int first=0,second=0;
        while (1)
        {
            if(s1[first]==s2[second])
             {
                first++;
                second++;
                count++;
             }
            else
             second++;
            if(first==n || second==m)
             break;
        }
        cout<<count<<endl;
        

    }
    


return 0;
}