#include<bits/stdc++.h>
using namespace std;
#define endl '\n';

signed main()
{
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);

  int day,gap;

  cin>>day>>gap;

  int count=0;
    int check=gap;
  while(day)
  {
    count++;
    check--;
    if(check==0)
     {
        day++;
        check=gap;
     }


    day--;
  }

cout<<count;
  return 0;
}