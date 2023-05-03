#include <bits/stdc++.h>
#include <unordered_map>
#include <unordered_set>
#include <climits>
#include <cmath>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int ones = 0;
    while (n)
    {
        ones += (n & 1);
        n >>= 1;
    }
    cout << ones;
}


