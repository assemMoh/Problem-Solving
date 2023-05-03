#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    long long values[n], mn = 0;
    for (int i = 0; i < n; i++) cin >> values[i];
    mn = *min_element(values, values + n);
    if (mn - 1 == 0) cout << -1;
    else cout << 1;
}
