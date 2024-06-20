#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,p,q;
    long long a,b,m,n;
    
    cin >> t;
    
    while(t--)
    {
    cin >> a>>b>>n>>m;
    p=q=0;
    
    if((a<=0&&b<=0) || (a>0&&b>0))
    {
    
    a=abs(a);
    b=abs(b);
    
    if(a<b)
     p=a;
    else 
     q=b;
     
    cout <<min( (abs(a-b)*n) +(min(a,b)*m) , (a+b)*n )<< endl;
    }
    
    else
    {
    a=abs(a);
    b=abs(b);
    
    cout << a*n + b*n<< endl;
    
    
    }
    
    }
       
    return 0;
}