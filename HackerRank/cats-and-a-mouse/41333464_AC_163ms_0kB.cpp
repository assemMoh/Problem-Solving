#include <bits/stdc++.h>
#include <unordered_map>
#include <unordered_set>
#include <cmath>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, a, b, c;
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> c;
        if (abs(b - c) > abs(a - c)) cout << "Cat A";
        else if (abs(b - c) < abs(a - c)) cout << "Cat B";
        else cout << "Mouse C";
        cout << endl;
    }
}


