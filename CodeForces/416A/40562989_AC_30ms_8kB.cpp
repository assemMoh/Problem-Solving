#include <bits/stdc++.h>
#include <unordered_map>
#include <unordered_set>
#include <climits>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    string sign, ch;
    long long x, left = -1e9-5, right = 1e9+5;
    cin >> n;
    while (n--)
    {
        cin >> sign >> x >> ch;
        if (ch == "N")
        {
            if (sign == ">") sign = "<=";
            else if (sign == "<") sign = ">=";
            else if (sign == ">=") sign = "<";
            else if (sign == "<=") sign = ">";
        }
        if (sign == ">") left = max(left, x + 1);
        else if (sign == "<") right = min(right, x - 1);
        else if (sign == ">=") left = max(left, x);
        else if (sign == "<=") right = min(right, x);
    }

    if (left > right) cout << "Impossible";
    else cout << left;


}