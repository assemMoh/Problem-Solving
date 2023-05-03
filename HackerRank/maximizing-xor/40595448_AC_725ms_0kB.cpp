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

    long long a, b, c = 0, bits = 1, ans;
    cin >> a >> b;

    while (b)
    {
        if (!(a & 1) and (b & 1)) c = bits;
        a >>= 1;
        b >>= 1;
        bits++;
    }
    ans = pow(2, c);
    cout << ans - 1;



}


