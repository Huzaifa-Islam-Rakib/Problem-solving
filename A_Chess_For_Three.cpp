#include<bits/stdc++.h>
using namespace std;


int main()
{
    
    int t;
    cin >> t;
    int a,b,c;
    
    while(t--)
    {
    
    cin >> a>>b>>c;
    
    
    int count=a;
    while(a)
    {
     if(b==c)
      b--;
     else
      c--;
    a--;
    }
    count+=b;
    c-=b;
    
    if(c%2)
     cout << "-1" << endl;
    else 
    cout << count << endl;
    
    }
      
    return 0;
}