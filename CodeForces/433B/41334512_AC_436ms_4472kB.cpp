#include <bits/stdc++.h>
#include <unordered_map>
#include <unordered_set>
#include <cmath>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, entry;
    long long sum = 0;
    cin >> n;
    vector <long long> stones, preStones (n + 1, 0), preSorted(n + 1, 0);
    priority_queue<long long, vector<long long>, greater<long long>> sorted;
    for (int i = 0; i < n; i++)
    {
        cin >> entry;
        stones.push_back(entry);
        sum += entry;
        preStones[i+1] = sum;
        sorted.push(entry);
    }
    sum = 0;
    int i = 1;
    while (!sorted.empty())
    {
        sum += sorted.top();
        sorted.pop();
        preSorted[i] = sum;
        i++;
    }
    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int t, a, b;
        cin >> t >> a >> b;
        if (t == 1)
        {
            cout << preStones[b] - preStones[a - 1];
        }
        else if (t == 2) cout << preSorted[b] - preSorted[a - 1];
        cout << endl;
    }

}


