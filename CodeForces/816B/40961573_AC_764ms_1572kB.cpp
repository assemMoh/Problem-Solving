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

    int n, k, m, a, b;
    cin >> n >> k >> m;
    vector <int> degrees(200009, 0), all(200009, 0);
    for (int i = 1; i <= n; i++)
    {
        cin >> a >> b;
        degrees[a]++;
        degrees[b + 1]--;
    }
    for (int i = 1; i < degrees.size(); i++)
    {
        degrees[i] += degrees[i - 1];
    }
    for (int i = 1; i < degrees.size(); i++)
    {
        if (degrees[i] >= k)
            all[i]++;
    }
    for (int i = 1; i < all.size(); i++)
        all[i] += all[i - 1];

    for (int i = 0; i < m; i++)
    {
        cin >> a >> b;
        cout << all[b] - all[a - 1] << endl;
    }

}


