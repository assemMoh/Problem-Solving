#include <bits/stdc++.h>
#include <unordered_map>
#include <unordered_set>
#include <climits>
#include <cmath>
#include <stdint.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long x, t;
    cin >> t;
    while (t--)
    {
        cin >> x;
        cout << (x ^ 4294967295) << endl;
    }

}


