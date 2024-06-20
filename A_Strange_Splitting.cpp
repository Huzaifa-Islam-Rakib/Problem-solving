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
        int ar[n];
        unordered_map<int,int>m;
        for(int i=0;i<n;i++)
         {
            cin>>ar[i];
            m[ar[i]]++;
         }
        if(m.size()<2)
         {
            cout<<"NO"<<endl;
         }
        else if(m.size()==2)
        {
            int count=1;
            auto it=m.begin();
            for( ; it!=m.end();it++)
             {
                if((*it).second>1)
                 {
                    cout<<"YES"<<endl;
                    break;
                 }
             }
            if(it==m.end())
             {
                cout<<"NO"<<endl;
             }
            else
             {
                for(int i=0;i<n;i++)
                 {
                    if(count && (*it).first==ar[i])
                     {
                        cout<<"B";
                        count--;
                     }
                    else
                    cout<<"R";
                 }
                cout<<endl;
             }

        }
        else
         {
            cout<<"YES"<<endl;
            cout<<"R";
            for(int i=0;i<n-1;i++)
             cout<<"B";
            cout<<endl;
         }
        m.clear();
    }
    


return 0;
}