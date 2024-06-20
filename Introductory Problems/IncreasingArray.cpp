/*
You are given an array of n integers. You want to modify the array so that it is increasing, i.e., every element is at least as large as the previous element.
On each move, you may increase the value of any element by one. What is the minimum number of moves required?

Input
The first input line contains an integer n: the size of the array.
Then, the second line contains n integers x_1,x_2,\ldots,x_n: the contents of the array.

Output
Print the minimum number of moves.

Constraints
1 \le n \le 2 \cdot 10^5
1 \le x_i \le 10^9

Example
Input:
5
3 2 5 1 7

Output:
5 -> 3 2 5 1 7 --> 3 3 5 1 7 -> 3 3 5 2 7 -> 3 3 5 3 7 -> 3 3 5 4 7 -> 3 3 5 4 7
*/

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

    ll j[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> j[i];
    }

    ll ans = 0;

    for (ll i = 1; i < n; i++)
    {
        if (j[i - 1] > j[i])
        {
            ans += (j[i - 1] - j[i]);
            j[i] = j[i - 1];
        }
    }

    cout << ans << endl;

    return 0;
}