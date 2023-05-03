#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, mnInd = 0, mxInd = 0, mn, mx;
    cin >> n;
    int soldiers[n];
    for (int i = 0; i < n; i ++)
    {
        cin >> soldiers[i];
        if (i == 0) {mn = soldiers[i]; mx = soldiers[i];}
        else
        {
            if (soldiers[i] > mx) {mx = soldiers[i]; mxInd = i;}
            else if (soldiers[i] <= mn) {mn = soldiers[i]; mnInd = i;}
        }
    }
    if (mxInd > mnInd) mnInd ++;
    int ans = mxInd + (n - 1 - mnInd);
    cout << ans;
}
