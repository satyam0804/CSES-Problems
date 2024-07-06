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

    ll total_sum = (n * (n + 1)) / 2;

    if (total_sum % 2 != 0)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
        vector<int> set1, set2;
        ll set1_sum = 0;
        ll max_element = n;

        vector<int> trace(n + 1, 0);

        while (set1_sum < total_sum / 2)
        {
            ll remaining_sum = total_sum / 2 - set1_sum;

            if (remaining_sum > max_element)
            {
                set1.push_back(max_element);
                trace[max_element] = 1;
                set1_sum += max_element;
                max_element--;
            }
            else
            {
                set1.push_back(remaining_sum);
                trace[remaining_sum] = 1;
                set1_sum = total_sum;
            }
        }

        for (int i = 1; i < n; i++)
        {
            if (trace[i] == 0)
            {
                set2.push_back(i);
            }
        }

        cout << set1.size() << endl;
        for (auto x : set1)
        {
            cout << x << " ";
        }

        cout << set2.size() << endl;
        for (auto x : set2)
        {
            cout << x << " ";
        }
    }

    return 0;
}