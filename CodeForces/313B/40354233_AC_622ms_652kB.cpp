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

    string s;
    cin >> s;
    vector <int> frq(s.size());

    int c = 0;
    frq[0] = c;
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i - 1] == s[i]) c++;
        frq[i] = c;
    }

    int m, l, r;
    cin >> m;
    while (m--)
    {
        cin >> l >> r;
        if (l == 1) cout << frq[r - 1];
        else cout << frq[r - 1] - frq[l - 1];
        cout << endl;
    }

}


