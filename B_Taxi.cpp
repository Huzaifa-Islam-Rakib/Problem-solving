#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int a,b,c,d;
    a=b=c=d=0;
    cin >> n;
    int x;
    for(int i=0;i<n;i++)
    {
     cin >> x;
     if(x==1)
      a++;
      else if(x==2)
      b++;
      else if(x==3)
      c++;
      else 
      d++;
    
    }
    int count=0;
    count=d;
    count +=c;
    a=max(0,a-c);
    count+=(b/2)+(b%2);
    if(b%2)
    a=max(0,a-2);
    count+=(a/4);
    if(a%4!=0)
    count++;
    cout <<count;
    
    return 0;
}
   