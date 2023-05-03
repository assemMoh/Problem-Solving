#include <bits/stdc++.h>
#include <unordered_map>
#include <unordered_set>
#include <cmath>
#include <bitset>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        string a, r = "";
        cin >> a;
        r += a[0];
        for (int i = 1; i < a.size(); i += 2)
            r += a[i];
        cout << r << endl;
    }
}


