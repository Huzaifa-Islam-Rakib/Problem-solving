#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;

    int a;
    long long int mx;
    long long int sum=0;
    int index=1;

    int ar[n] {0};
    for(int i=0;i<n;i++)
     {
        cin>>ar[i];
        if(i<m)
         sum+=ar[i];
     }
    mx=sum;
    int minus=0,plux=m;

    while(plux!=n)
    {
        sum=sum+ar[plux]-ar[minus];
        minus++;
        plux++;
        if(sum<mx)
         {
             mx=sum;
             index=minus+1;
         }
    }
    cout<<index;



  return 0;
}