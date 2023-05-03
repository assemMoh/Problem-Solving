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

    int n, m, k, a, b, c;
    cin >> n >> m >> k;
    vector <long long> base(n + 2, 0);
    vector <vector<long long>> temp(m + 2);

    for (int i = 1; i <= n; i++)
    {
        cin >> a;
        base[i] = a;
    }

    for (int i = 1; i <= m; i++)
    {
        cin >> a >> b >> c;
        temp[i].push_back(a);
        temp[i].push_back(b);
        temp[i].push_back(c);
    }

    vector <long long> rep(m + 2, 0);
    for (int i = 0; i < k; i++)
    {
        cin >> a >> b;
        rep[a]++;
        rep[b + 1]--;
    }

    for (int i = 1; i < rep.size(); i++)
    {
        rep[i] += rep[i - 1];
    }

    for (int i = 1; i <= m; i++)
        temp[i][2] *= rep[i];

    vector <long long> ans (n + 2, 0);

    for (int i = 1; i <= m; i++)
    {
        ans[temp[i][0]] += temp[i][2];
        ans[ temp[i][1] + 1 ] -= temp[i][2];
    }
    for (int i = 1; i <= n; i++)
        ans[i] += ans[i - 1];

    for (int i = 1; i <= n; i++)
        ans[i] += base[i], cout << ans[i] << " ";

}


