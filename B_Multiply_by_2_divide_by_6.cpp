#include<bits/stdc++.h>
using namespace std;
#define endl '\n';
const int N=1e5+10;
int Global[N];
signed main()
{
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
    int t, n;
    cin >> t;
    while (t--) {
        int ans = 0;
        cin >> n;
        if (n == 1) {
            ans = 0;
            cout << ans << '\n';
            continue;
        }
        if (n % 3 != 0) {
            ans = -1;
            cout << ans << '\n';
            continue;
        }
        while (n != 1) {
            if (n % 3 != 0) {
                cout << -1 << '\n';
                break;
            }
            if (n % 6 == 0) n /= 6;
            else n *= 2;
            ans++;
        }
        if(n == 1) cout << ans << '\n';
    }
 
    return 0;

}