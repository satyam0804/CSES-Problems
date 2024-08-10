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

    string s;
    cin >> s;
    sort(s.begin(), s.end());

    vector<string> v;

    do
    {
        v.push_back(s);
    } while (next_permutation(s.begin(), s.end()));

    cout << v.size() << endl;

    for (auto str : v)
    {
        cout << str << endl;
    }

    return 0;
}