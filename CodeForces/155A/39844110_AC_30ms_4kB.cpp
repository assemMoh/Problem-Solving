#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, mn, mx, entry, amazing = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> entry;
        if (i == 0) {mn = entry, mx = entry;}
        else
        {
            if (mn > entry) { mn = entry; amazing++;}
            else if (mx < entry) { mx = entry; amazing++;}
        }
    }
    cout << amazing;
}
