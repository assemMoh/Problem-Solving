#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <cmath>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

long long n, m;

long long getCount(long long i)
{
    if (i <= m) return 1;
    return getCount(i / 2) + getCount((i / 2) + (i&1));
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    while(cin >> n >> m)
        cout << getCount(n) << endl;
}


