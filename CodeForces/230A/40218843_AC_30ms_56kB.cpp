#include <bits/stdc++.h>
#include <unordered_map>
#include <unordered_set>
#include <map>

using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, strength, dragonStren, bonus;
    multimap <int, int> drag;

    cin >> strength >> n;
    while(n--)
    {
        cin >> dragonStren >> bonus;
        drag.insert(pair<int, int>(dragonStren, bonus));
    }

    for(auto it: drag)
    {
        if (strength > it.first) strength += it.second;
        else {cout << "NO"; return 0;}
    }
    cout << "YES";

}
