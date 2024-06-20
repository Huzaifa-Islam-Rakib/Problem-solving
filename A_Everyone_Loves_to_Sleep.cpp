#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    int n,H,M;
    int h,m;
    

    for(int i=0;i<t;i++)
        {
            int sleep=24*60;
            cin>>n>>H>>M;
            int time=H*60+M;
            for(int j=0;j<n;j++)
             {
               cin>>h>>m;
               int temp=((h*60)+m ) -time;
               if(temp<0)
                {
                    temp+=24*60;
                }
               sleep=min(sleep,temp);

             }
             cout<<sleep/60<<" "<<sleep%60<<endl;
        }

  return 0;
}