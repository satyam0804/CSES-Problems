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
    ll n;
    cin >> n;

    ll ans = 0;
    for (int i = 5; n / i >= 1; i *= 5)
    {
        ans += n / i;
    }

    cout << ans << "\n";

    return 0;
}