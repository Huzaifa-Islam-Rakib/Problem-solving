#include <bits/stdc++.h>
using namespace std;
#define endl '\n';
const int N=1e5+10;
int Global[N];
int main() {
    int n;
    cin >> n;
    int mx=0;
    for(int i=0;i<n;i++)
    
    {
    int x;
    cin >> x;
    mx=max(mx,x);
    Global[x]++;
    
    }
    
    Global[0] = Global[0];

    
    for (int i = 1; i <=mx; ++i) {
        Global [i] = Global[i - 1] + Global[i];
    }

    
    int p;
    cin >> p;
    int x;
    
    
    for(int i=0;i<p;i++)
    {
    cin >> x;
    if(x>mx)
     {cout << Global[mx]<< endl;}
    else
      {
      
      cout << Global[x]<< endl;
      }
    }
    
    
    
    return 0;
}
   