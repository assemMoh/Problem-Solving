#include <bits/stdc++.h>
#include <unordered_map>
#include <unordered_set>
#include <map>
#include <climits>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, entry, sum = 0;
    cin >> n;
    vector <int> all;
    while (n--)
        cin >> entry, sum += entry, all.push_back(sum);


    int q, l, r;
    cin >> q;
    while (q--)
    {
        cin >> l >> r;
        if (l == 0) cout << all[r];
        else cout << all[r] - all[l - 1];
        cout << endl;
    }
}
