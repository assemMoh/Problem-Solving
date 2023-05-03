#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n = 3, alice[n], bob[n], aPoint = 0, bPoint = 0;
    for (int i = 0; i < n; i++) cin >> alice[i];
    for (int i = 0; i < n; i++) cin >> bob[i];
    for (int i = 0; i < n; i++)
    {
        if (alice[i] > bob[i]) aPoint++;
        else if (alice[i] < bob[i]) bPoint++;
    }
    cout << aPoint << " " << bPoint;

}
