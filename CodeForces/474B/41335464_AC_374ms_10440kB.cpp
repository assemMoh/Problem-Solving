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
    cin >> n;
    vector <int> pile;
    for (int i = 0; i < n; i++)
    {
        cin >> entry;
        pile.push_back(entry);
    }
    vector<pair<ll, ll>> ok;
    ll last = 0;
    for (int i = 0; i < pile.size(); i++)
    {
        if (i == 0)
        {
            ok.push_back(make_pair(1, pile[i]));
        }
        else{
            last = ok[i - 1].second;
            ok.push_back(make_pair(last + 1, last + pile[i]));
        }
    }
    vector <long long> all (1e6 + 6, 0);
    for (int i = 0; i < ok.size(); i++)
    {
        all[ok[i].first] += (i + 1);
        all[ok[i].second + 1] -= (i + 1);
    }
    for (int i = 1; i < all.size(); i++)
        all[i] += all[i - 1];

    int m;
    cin >> m;
    while (m--)
    {
        int e;
        cin >> e;
        cout << all[e] << endl;
    }

}


