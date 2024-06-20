#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    for (int i = 0; i < t; i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(a+b>9 || a+c>9 || b+c>9)
          cout<<"YES";
        else 
          cout<<"NO";
        cout<<'\n';
    }
    


  return 0;
}