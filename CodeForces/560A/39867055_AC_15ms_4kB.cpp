#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int entry, mn = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> entry;
        if (i == 0) mn = entry;
        else {
            if (entry < mn) mn = entry;
        }
    }
    if (mn - 1 == 0) cout << -1;
    else cout << 1;
}
