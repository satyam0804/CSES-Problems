#include <bits/stdc++.h>
#define ll long long
#define forn(i, n) for (int i = 0; i < int(n); i++)
#define vlln vector<long long int>
const int N = 2e5 + 10, MOD = 1e9 + 7;
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin >> t;
    ll ans = 0;
    while (t--)
    {
        ll x, y;
        cin >> y >> x;

        if (y > x)
        {
            if (y % 2 == 0)
            {
                ans = y * y - (x - 1);
                cout << ans << endl;
            }
            else
            {
                ans = (y - 1) * (y - 1) + 1 + (x - 1);
                cout << ans << endl;
            }
        }
        else
        {
            if (x % 2 != 0)
            {
                ans = x * x - (y - 1);
                cout << ans << endl;
            }
            else
            {
                ans = (x - 1) * (x - 1) + 1 + (y - 1);
                cout << ans << endl;
            }
        }
    }
    return 0;
}