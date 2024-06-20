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
    vector<int> ar;
    int sum=0;
    int x;
    for(int i=0;i<n;i++)
     {
        cin>>x;
        ar.push_back(x);
        sum+=x;
     }
    sum=floor(sum/2);
    sort(ar.begin(),ar.end());
    int i;
    for(i=n-1;i>=0;i--)
     {
        sum-=ar[i];
        if(sum<0)
         break;
     }
    cout<<n-i<<endl;


  return 0;
}