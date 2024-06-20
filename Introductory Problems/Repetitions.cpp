// You are given a DNA sequence: a string consisting of characters A, C, G, and T. Your task is to find the     longest repetition in the sequence. This is a maximum-length substring containing only one type of character.

// Input
// The only input line contains a string of n characters.

// Output
// Print one integer: the length of the longest repetition.

// Constraints
// 1 <= n <= 10^6

// Example
// Input:
// ATTCGGGA

// Output:
// 3

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

    ll count = 1, ans = 1;

    for (ll i = 0; i < s.length(); i++)
    {
        if (s[i] == s[i + 1])
        {
            count++;
        }
        else
        {
            count = 1;
        }
        ans = max(ans, count);
    }

    cout << ans << endl;

    return 0;
}
