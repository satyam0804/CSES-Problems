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

    int n = s.length();
    string ans(n, ' ');

    // make frequency of character in string
    int freq[26] = {};

    for (int i = 0; i < n; i++)
    {
        freq[s[i] - 'A'] += 1;
    }
    int count = 0;
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] % 2 != 0)
            count += 1;
    }

    if (count > 1)
    {
        cout << "NO SOLUTION" << endl;
    }
    else
    {
        int left = 0;
        int right = n - 1;

        for (int i = 0; i < n; i++)
        {
            if (freq[s[i] - 'A'] % 2 == 1)
            {
                ans[n / 2] = s[i];
                freq[s[i] - 'A'] -= 1;
            }

            while (freq[s[i] - 'A'] > 0)
            {
                ans[left++] = ans[right--] = s[i];
                freq[s[i] - 'A'] -= 2;
            }
        }
    }

    cout << ans << endl;

    return 0;
}