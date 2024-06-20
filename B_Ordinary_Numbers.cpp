#include<bits/stdc++.h>
using namespace std;
#define endl '\n';

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
    int k=n;
    if(n<10)
     {
        cout<<n<<endl;
        continue;
     }
    int digit=0;
    int first;

    while(n)
     {
        digit++;
        first=n%10;
        n/=10;
     }
    int mx=first;
    for(int i=0;i<digit-1;i++)
     {
        mx*=10;
        mx+=first;
     }
    int count=9*(digit-1);
    count+=first-1;
    if(k>=mx)
     count++;
    cout<<count<<endl;
  }
  


  return 0;
}