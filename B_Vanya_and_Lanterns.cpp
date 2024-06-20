#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
#define endl '\n';
const int N=1e5+10;
int Global[N];
signed main()
{
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);

    int n;
    int l;
    cin>>n>>l;

    vector<int> m;

    for(int i=0;i<n;i++)
     {
        int x;
        cin>>x;
        m.push_back(x);
     }

    sort(m.begin(),m.end());

    vector<int> ar;
    ar.push_back(m[0]*2);

    for(int i=1;i<n;i++)
    {
        ar.push_back(m[i]-m[i-1]);
    }
    auto it =m.end();
    it--;
    int x=(*it);
    ar.push_back((l-x)*2);

    int y=*max_element(ar.begin(),ar.end());
    cout<<y/2;
    if(y%2)
     {
        cout<<".5000000000";
     }
    else 
     cout<<".0000000000";
    
return 0;
}