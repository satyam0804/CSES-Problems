#include <bits/stdc++.h>
#define ll long long
#define forn(i, n) for (int i = 0; i < int(n); i++)
#define vlln vector<long long int>
const int N = 2e5 + 10, MOD = 1e9 + 7;
using namespace std;

vector<string> generate_graycode(int n)
{
    // base case
    if (n == 1)
        return {"0", "1"};

    vector<string> ans;

    vector<string> prev = generate_graycode(n - 1);
    int size_prev = prev.size();
    for (int i = 0; i < size_prev; i++)
    {
        ans.push_back("0" + prev[i]);
    }
    for (int i = size_prev - 1; i >= 0; i--)
    {
        ans.push_back("1" + prev[i]);
    }

    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    vector<string> graycode = generate_graycode(n);

    for (auto s : graycode)
    {
        cout << s << " ";
    }

    return 0;
}