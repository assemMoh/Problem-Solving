#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int stops, leaves, enters, cap = 0, mn = 0;
    cin >> stops;
    for (int i = 0; i < stops; i++)
    {
        cin >> leaves >> enters;
        if (i == 0) cap = enters;
        else
        {
            cap -= leaves;
            cap += enters;
        }
        mn = max(mn, cap);
    }
    cout << mn;
}
