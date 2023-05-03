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

    int t, entry, n;
    cin >> t;
    while (t--)
    {
        set <int> unq;
        cin >> n;
        for (int i = 0; i < n; i++)
            cin >> entry, unq.insert(entry);

        if (n == unq.size()) cout << "prekrasnyy";
        else cout << "ne krasivo";
        cout << endl;
    }
}
