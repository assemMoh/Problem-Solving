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

    long long a, sum = 0, bits = 0;
    int t;
    cin >> t;
    while (t--)
    {
        sum = 0, bits = 0;
        cin >> a;
        while (a)
        {
            if (!(a & 1)) sum += pow(2, bits);
            bits++;
            a >>= 1;
        }
        cout << sum << endl;
    }

}


