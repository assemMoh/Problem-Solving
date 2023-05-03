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

    long long n, c = 0, ans;
    cin >> n;
    while (n)
    {
        if (!(n & 1)) c++;
        n >>= 1;
    }
    ans = pow(2, c);
    cout << ans;

}


