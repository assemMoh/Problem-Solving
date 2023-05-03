#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int budget, nkeyboards, ndrives, options = -1;
    cin >> budget >> nkeyboards >> ndrives;
    int keyboards[nkeyboards], drives[ndrives];
    for (int i = 0; i < nkeyboards; i++) cin >> keyboards[i];
    for (int i = 0; i < ndrives; i++)
    {
        cin >> drives[i];
        for (int j = 0; j < nkeyboards; j++)
        {
            int prices = drives[i] + keyboards[j];
            if (prices <= budget && prices > options) options = prices;
        }
    }
    cout << options;
}
