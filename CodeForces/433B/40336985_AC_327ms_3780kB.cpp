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

    unsigned long long n, entry, sum = 0;
    cin >> n;
    vector <unsigned long long> ans;
    vector <unsigned long long> sorted_ans;
    for (int i = 0; i < n; i++)
        cin >> entry, sorted_ans.push_back(entry), sum += entry, ans.push_back(sum);
    sort(sorted_ans.begin(), sorted_ans.end());
    sum = 0;
    for (int i = 1; i < n; i++)
        sorted_ans[i] = sorted_ans[i] + sorted_ans[i - 1];

    int q, t, l, r;
    cin >> q;
    while (q--)
    {
        cin >> t >> l >> r;
        if (t == 1)
            if (l == 1) cout << ans[r - 1];
            else cout << ans[r - 1] - ans[l - 2];
        else
            if (l == 1) cout << sorted_ans[r - 1];
            else cout << sorted_ans[r - 1] - sorted_ans[l - 2];
        cout << endl;
    }
}
