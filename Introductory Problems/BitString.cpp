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

    ll ans = 1;
    ll expo = n;
    ll base = 2LL;
    while (expo)
    {
        if (expo & 1ll)
        { // Bitwise AND operation for LSB
            ans = (ans * base) % MOD;
        }
        base = (base * base) % MOD;
        expo >>= 1ll; // right shift
    }

    cout << ans << endl;

    // This is Fast Exponential Method
    return 0;
}