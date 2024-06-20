#include<bits/stdc++.h>
using namespace std;

int main()
{
    
    int n,m,a,b;
    bool flag=1;
    
    cin >> n>>m;
    
    if(n<m)
    {
    cout << -1;
    return 0;
    
    }
    
    a=n/2;
    b=n%2;
    
    while(1)
    {
    if((a+b)%m==0)
     {
     cout << a+b<< endl;
     flag=0;
     break;
     }
     
     
    if(a<=0)
    break ;
    
    
     a--;
     b+=2;
    
    
    }
    
    
    if(flag)
    cout << -1 << endl;
      
    return 0;
}