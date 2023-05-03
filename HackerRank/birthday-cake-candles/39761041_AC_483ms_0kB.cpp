#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, mxCount = 0;
    cin >> n;
    long long candles[n], mx = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> candles[i];
        if (candles[i] > mx)
        {
            mx = candles[i];
            mxCount = 1;
        }
        else if (candles[i] == mx) mxCount++;
    }
    cout << mxCount;
}
