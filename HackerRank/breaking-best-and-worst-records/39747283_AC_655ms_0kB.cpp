#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, mn, mx, mnCount = 0, mxCount = 0;
    cin >> n;
    int scores[n];
    cin >> scores[0];
    mn = scores[0];
    mx = scores[0];

    for (int i = 1; i < n; i++)
    {
        cin >> scores[i];
        if (scores[i] < mn) {mn = scores[i]; mnCount++;}
        if (scores[i] > mx) {mx = scores[i]; mxCount++;}
    }
    cout << mxCount << " " << mnCount;
}
