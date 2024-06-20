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
        int n;
        int allproduct=1;
        cin>>n;
        int v[n];
        int count0=0;
        for(int i=0;i<n;i++)
         {
            cin>>v[i];
            allproduct*=v[i];
            if(v[i]==0)
             count0++;
           
         }
        if(count0==0)
        {
            long count=INT_MIN;

            vector<long> a;
            for(int i=0;i<n;i++)
            {
                long p=(allproduct/v[i])*(v[i]+1);
                a.push_back(p);
            }
            cout<<*max_element(a.begin(),a.end())<<endl;
        }
        else if(count0==1)
        {
            int count=1;
            for(int i=0;i<n;i++)
             {
               if(v[i]==0) 
                continue;
               count*=v[i];
             }
            cout<<count<<endl;
        }
        else 
         cout<<0<<endl;

    }
    

  return 0;
}