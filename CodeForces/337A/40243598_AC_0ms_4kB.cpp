#include <bits/stdc++.h>
#include <unordered_map>
#include <unordered_set>
#include <map>

using namespace std;

int main()
{


    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int children, entry, n;
    cin >> children >> n;
    vector <int> puzzles;
    for (int i = 0; i < n; i++)
    {
        cin >> entry;
        puzzles.push_back(entry);
    }
    sort(puzzles.begin(), puzzles.end());
    int mn = INT_MAX;
    for (int i = 0; i <= n - children; i++)
    {
        mn = min(mn, (puzzles[children - 1 + i] - puzzles[i]));
    }
    cout << mn;
}
