#include <bits/stdc++.h>
#define ll long long
#define forn(i, n) for (int i = 0; i < int(n); i++)
#define vlln vector<long long int>
const int N = 2e5 + 10, MOD = 1e9 + 7;
using namespace std;

void movesDisk(int n, vector<vector<int>> &moves, int source, int helper, int destination)
{
    if (n == 1)
    {
        moves.push_back({source, destination});
        return;
    }
    movesDisk(n - 1, moves, source, destination, helper);
    moves.push_back({source, destination});
    movesDisk(n - 1, moves, helper, source, destination);
}

void toh(int n)
{
    vector<vector<int>> moves;
    int source = 1, helper = 2, destination = 3;

    movesDisk(n, moves, source, helper, destination);

    cout << moves.size() << endl;

    for (auto move : moves)
    {
        cout << move[0] << " " << move[1] << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    toh(n);

    return 0;
}