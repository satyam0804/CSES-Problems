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
    ll sum = 0;
    ll new_sum = 0;
    for (ll i = 0; i <= n; i++)
    {
        sum += i;
    }
    for (ll i = 0; i < n - 1; i++)
    {
        ll x;
        cin >> x;
        new_sum += x;
    }

    cout << sum - new_sum << endl;
    return 0;
}